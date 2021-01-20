/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2750.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <gunkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 00:56:37 by gunkim            #+#    #+#             */
/*   Updated: 2021/01/21 02:05:46 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		arr[1000];// = {3, 0, 1, 8, 7, 2, 5, 4, 9, 6};
int		n;

void	ft_qsort(int start, int end)
{
	int		pivot;
	int		head;
	int		temp;

	pivot = start;
	head = end;
	while (pivot != head)
	{
		if (pivot < head)
		{
			if (arr[pivot] > arr[head])
			{
				temp = arr[pivot];
				arr[pivot] = arr[head];
				arr[head] = temp;
				temp = pivot;
				pivot = head;
				head = temp;
			}
			else
				head--;
		}
		else if (head < pivot)
		{
			if (arr[head] > arr[pivot])
			{
				temp = arr[pivot];
				arr[pivot] = arr[head];
				arr[head] = temp;
				temp = pivot;
				pivot = head;
				head = temp;
			}
			else
				head++;
		}
	}
	if (start != end)
	{
		if (start != pivot)
			ft_qsort(start, pivot - 1);
		if (pivot != end)
			ft_qsort(pivot + 1, end);
	}
}

int		main(void)
{
	int		i;

	scanf("%d", &n);
	i = -1;
	while (++i < n)
		scanf("%d", &arr[i]);
	ft_qsort(0, n - 1);
	// n = 10;
	// ft_qsort(0, 9);
	i = -1;
	while (++i < n)
		printf("%d\n", arr[i]);
}
