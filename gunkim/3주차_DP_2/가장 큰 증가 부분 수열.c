/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   가장 큰 증가 부분 수열.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <gunkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:55:06 by gunkim            #+#    #+#             */
/*   Updated: 2020/11/23 05:01:01 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	size_t	n;
	size_t	*arr;
	size_t	*mem;
	size_t	i;
	size_t	j;
	size_t	max;
	size_t	temp;

	max = 0;
	scanf("%lu", &n);
	arr = (size_t *)malloc(sizeof(size_t) * (n + 1));
	i = 0;
	while (++i < n)
		scanf("%lu ", &arr[i]);
	scanf("%lu", &arr[i]);
	mem = (size_t *)malloc(sizeof(size_t) * (n + 1));
	mem[1] = arr[1];
	i = 0;
	while (i++ < n)
	{
		j = i + 1;
		temp = 0;
		while (--j)
		{
			if (arr[j - 1] < arr[i])
			{
				if (temp < mem[j - 1])
					temp = mem[j - 1];
			}
		}
		mem[i] = temp + arr[i];
		if (max < mem[i])
			max = mem[i];
	}
	printf("%lu\n", max);
	free(arr);
	free(mem);
	return (0);
}
