/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   가장 긴 감소하는 부분 수열.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:33:51 by gunkim            #+#    #+#             */
/*   Updated: 2020/11/28 11:21:51 by gunkim           ###   ########.fr       */
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
	size_t	j_max;
	size_t	max;
//	size_t	idx;

	scanf("%lu", &n);
	arr = (size_t *)malloc(sizeof(size_t) * (n + 1));
	i = 0;
	while (++i < n)
		scanf("%lu ", &arr[i]);
	scanf("%lu", &arr[i]);
	mem = (size_t *)malloc(sizeof(size_t) * (n + 1));
	mem[0] = 0 - 1;
	max = 1;
	j_max = 1;
	i = 1;
	while (i <= n) // 4
	{
		if (mem[j_max - 1] > arr[i]) // 
		{
			mem[j_max] = arr[i];
			max = j_max++;
			continue;
		}
		j = j_max - 1;
		while(j)
		{
			if (mem[j - 1] > arr[i] && mem[j] < arr[i])
			{
				mem[j] = arr[i];
				break;
			}
			j--;
		}
/*		printf("=== n is %zu ===\n", i);
		idx = 0;
		while (idx++ < n)
			printf("  arr[%zu]", idx);
		printf("\n");
		idx = 0;
		while (idx++ < n)
			printf("%8zu", arr[idx]);
		printf("\n\n");
		idx = 0;
		while (idx++ < j_max)
			printf("  mem[%zu]", idx);
		printf("\n");
		idx = 0;
		while (idx++ < j_max)
			printf("%8zu", mem[idx]);
		printf("\n\n");*/
		i++;
	}
	printf("%lu\n", max);
	free(arr);
	free(mem);
	return (0);
}
