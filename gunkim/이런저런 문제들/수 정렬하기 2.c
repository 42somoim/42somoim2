/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   수 정렬하기.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <gunkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 03:40:44 by gunkim            #+#    #+#             */
/*   Updated: 2020/12/30 03:28:06 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		n;

void	ft_recursive_merge_sort(int start, int end, int *arr, int *temp)
{
	if (end - start + 1 >= 3)
	{
		ft_recursive_merge_sort(start, start + (end - start + 1) / 2 - 1, arr, temp);
		ft_recursive_merge_sort(start + (end - start + 1) / 2, end, arr, temp);
	}
	int		i;
	int		j;
	int		left, right, half, last;

	i = 0;
	left = start;
	right = half = start + (end - start + 1) / 2;
	last = end + 1;
	while (i < end - start + 1)
	{
		if (left < half && right < last)
		{
			if (arr[left] > arr[right]) 
			{
				temp[start + i] = arr[right];
				right++;
			}
			else
			{
				temp[start + i] = arr[left];
				left++;
			}
		}
		else if (left >= half)
		{
			temp[start + i] = arr[right];
			right++;
		}
		else if (right >= last)
		{
			temp[start + i] = arr[left];
			left++;
		}
		///*
		j = -1;
		while (++j < 9)
			printf("%d ", arr[j]);
		printf("\n");
		j = -1;
		while (++j < 9)
			printf("%d ", temp[j]);
		printf("\n");
		//*/
		i++;
	}
	while (i--)
	{
		arr[start] = temp[start];
		start++;
	}
}

int		main(void)
{
	int		i;//         0  1  2  3  4  5  6  7  8  9
//	int		arr[1000000] = {1, 2, 0, 1, 9, 8, 7, 6, 5, 0};
	int		arr[1000000] = {0};
	int		temp[1000000] = {0};

	scanf("%d", &n);
	i = -1;
	while (++i < n)
		scanf("%d", &arr[i]);
	///*
	i = -1;
	while (++i < n)
		printf("%d", arr[i]);
	//*/
	ft_recursive_merge_sort(0, n - 1, arr, temp);
	i = -1;
	while (++i < n)
		printf("%d\n", arr[i]);
	return (0);
}
