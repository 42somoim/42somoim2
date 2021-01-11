/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   좌표 정렬하기.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 17:49:17 by gunkim            #+#    #+#             */
/*   Updated: 2021/01/11 21:28:52 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		arr[100000][2] = {0};
int		temp[100000][2];

void	ft_do_merge_first(int start, int mid, int end)
{
	int		i;
	int		left, right;
	
	left = start;
	right = mid + 1;
	i = 0;
	while (i <= end - start)
	{
		if (left <= mid && right <= end)
		{
			if (arr[left][0] < arr[right][0])
			{
				temp[start + i][0] = arr[left][0];
				temp[start + i][1] = arr[left][1];
				left++;
			}
			else
			{
				temp[start + i][0] = arr[right][0];
				temp[start + i][1] = arr[right][1];
				right++;
			}
		}
		else if (left > mid)
		{
			temp[start + i][0] = arr[right][0];
			temp[start + i][1] = arr[right][1];
			right++;
		}
		else
		{
			temp[start + i][0] = arr[left][0];
			temp[start + i][1] = arr[left][1];
			left++;
		}
		i++;
	}
	while (i--)
	{
		arr[start + i][0] = temp[start + i][0];
		arr[start + i][1] = temp[start + i][1];
	}
}

void	ft_r_merge_first(int start, int end)
{
	int		mid;

	if (end > start)
	{
		mid = (start + end) / 2;
		ft_r_merge_first(start, mid);
		ft_r_merge_first(mid + 1, end);
		ft_do_merge_first(start, mid, end);
	}
}

void	ft_do_merge_second(int start, int mid, int end)
{
	int		i;
	int		left, right;
	
	left = start;
	right = mid + 1;
	i = 0;
	while (i <= end - start)
	{
		if (left <= mid && right <= end)
		{
			if (arr[left][1] < arr[right][1])
			{
				temp[start + i][1] = arr[left][1];
				temp[start + i][0] = arr[left][0];
				left++;
			}
			else
			{
				temp[start + i][1] = arr[right][1];
				temp[start + i][0] = arr[right][0];
				right++;
			}
		}
		else if (left > mid)
		{
			temp[start + i][1] = arr[right][1];
			temp[start + i][0] = arr[right][0];
			right++;
		}
		else
		{
			temp[start + i][1] = arr[left][1];
			temp[start + i][0] = arr[left][0];
			left++;
		}
		i++;
	}
	while (i--)
	{
		arr[start + i][1] = temp[start + i][1];
		arr[start + i][0] = temp[start + i][0];
	}
}

void	ft_r_merge_second(int start, int end)
{
	int		mid;

	if (end > start)
	{
		mid = (start + end) / 2;
		ft_r_merge_second(start, mid);
		ft_r_merge_second(mid + 1, end);
		ft_do_merge_second(start, mid, end);
	}
}

void	ft_go_through(int start, int end)
{
	int		i;
	int		base;
	int		left, right;

	i = left = 0;
	base = arr[i][0];
	while (start + i < end)
	{
		if (base != arr[i + 1][0])
		{
			right = i;
		 	ft_r_merge_second(left, right);
			left = right + 1;
			base = arr[i + 1][0];
		}
		i++;
	}
}



int		main(void)
{
	int		i, n;

	scanf("%d", &n);
	i = -1;
	while (++i < n)
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	ft_r_merge_first(0, n - 1);
	ft_go_through(0, n - 1);
	i = -1;
	while (++i < n)
		printf("%d %d\n", arr[i][0], arr[i][1]);
	return (0);
}
