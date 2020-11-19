/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   가장 긴 증가하는 부분 수열(이          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 01:06:23 by gunkim            #+#    #+#             */
/*   Updated: 2020/11/20 04:25:42 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	size_t	n;
	size_t	*arr;
	size_t	*mem;
	size_t	idx_max;
	size_t	result;
	size_t	i;
	size_t	j;

	scanf("%lu", &n);
	arr = (size_t *)malloc(sizeof(size_t) * (n + 1));
	i = 0;
	while (++i < n)
	{
		scanf("%lu ", &arr[i]);
	}
	scanf("%lu", &arr[i]);
	mem = (size_t *)malloc(sizeof(size_t) * (n + 1));
	idx_max = 1;
	i = 0;
	while (i++ < n)
	{
		j = idx_max;
		if (mem[j - 1] < arr[i] && mem[j] == 0)
		{
			mem[j] = arr[i];
			result = idx_max;
			idx_max++;
		}
		while (j)
		{
			if (mem[j - 1] < arr[i] && mem[j] > arr[i])
			{
				mem[j] = arr[i];
				break;
			}
			j--;
		}
	}
	printf("%lu\n", result);
	free(arr);
	free(mem);
	return (0);
}
