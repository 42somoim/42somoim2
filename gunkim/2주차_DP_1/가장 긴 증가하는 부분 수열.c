/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   가장 긴 증가하는 부분 수열.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <gunkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:55:06 by gunkim            #+#    #+#             */
/*   Updated: 2020/11/12 16:47:35 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	size_t	n;
	size_t	*a;
	size_t	*mem;
	size_t	i;
	size_t	temp;
	size_t	max;

	max = 1;
	scanf("%lu", &n);
	a = (size_t *)malloc(sizeof(size_t) * (n + 1));
	i = 0;
	while (++i < n)
	{
		scanf("%lu ", &a[i]);
	}
	scanf("%lu", &a[i]);
	mem = (size_t *)malloc(sizeof(size_t) * (n + 1));
	i = 0;
	while (i++ < n)
	{
		temp = i;
		while (i--)
			if (a[i] < a[temp])
				if (mem[i] >= mem[temp])
					mem[temp] = mem[i];
		mem[temp] += 1;
		if (max < mem[temp])
			max = mem[temp];
		i = temp;
		printf("mem[%lu] : %lu\n", i, mem[i]);
	}
	printf("%lu\n", max);
	free(a);
	free(mem);
	return (0);
}
