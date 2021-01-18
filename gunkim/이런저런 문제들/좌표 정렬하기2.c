/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   좌표 정렬하기2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:49:07 by gunkim            #+#    #+#             */
/*   Updated: 2021/01/18 19:21:52 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		n;
int		arr[100000][2];
int		temp[100000][2];

int		ft_recursive_merge(int start, int end, int friend, int myself)
{
	int		mid;
	int		left, right;
	int		i;//, j;
	int		max;

	mid = (end + start) / 2;
	if (end - start >= 2)
	{
		ft_recursive_merge(start, mid, friend, myself);
		ft_recursive_merge(mid + 1, end, friend, myself);
	}
	left = start;
	right = mid + 1;
	// printf("(%d, %d)\n", start, end);
	
	i = 0;
	max = end - start + 1;
	while (i < max)
	{
		// printf("left : %d, right : %d, mid : %d, end : %d\n", left, right, mid, end);
		if (left <= mid && right <= end)
		{
			if (arr[left][friend] >= arr[right][friend])
			{
				temp[start + i][friend] = arr[right][friend];
				temp[start + i][myself] = arr[right][myself];
				right++;
			}
			else if (arr[left][friend] < arr[right][friend])
			{
				temp[start + i][friend] = arr[left][friend];
				temp[start + i][myself] = arr[left][myself];
				left++;
			}
		}
		else if (left <= mid)
		{
			temp[start + i][friend] = arr[left][friend];
			temp[start + i][myself] = arr[left][myself];
			left++;
		}
		else if (right <= end)
		{
			temp[start + i][friend] = arr[right][friend];
			temp[start + i][myself] = arr[right][myself];
			right++;
		}
		i++;
		// j = -1;
		// while (++j < n)
		// 	printf("%d ", temp[j][0]);
		// j = -1;
		// printf("\n");
		// while (++j < n)
		// 	printf("%d ", temp[j][1]);
		// printf("\n");
		// printf("\n");
	}
	while (i-- >= 0)
	{
		arr[start + i][friend] = temp[start + i][friend];
		arr[start + i][myself] = temp[start + i][myself];
	}
	return (0);
}

void	ft_same_through(int start, int end, int friend, int myself)
{
	int		left, right;
	int		base;
	int		i;

	i = 0;
	left = start;
	right = start;
	base = arr[0][myself];
	while (i < end)
	{
		if (arr[i + 1][myself] != base)
		{
			base = arr[i + 1][myself];
			right = i;
			ft_recursive_merge(left, right, friend, myself);
			left = i + 1;
		}
		i++;
	}
}

int		main(void)
{
	int		i;
	
	scanf("%d", &n);

	i = -1;
	while (++i < n)
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	ft_recursive_merge(0, n - 1, 1, 0);
	ft_same_through(0, n - 1, 0, 1);
	i = -1;
	while (++i < n)
		printf("%d %d\n", arr[i][0], arr[i][1]);
	return (0);
}
