/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1로_만들기.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:54:13 by gunkim            #+#    #+#             */
/*   Updated: 2020/11/03 15:22:05 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		mem[1048576];

int		min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

int		main(void)
{
	int		x;
	int		i;

	scanf("%d", &x);
	i = 1;
	while (++i <= x)
	{
		mem[i] = mem[i - 1] + 1;
		if (i % 3 == 0)
			mem[i] = min(mem[i / 3] + 1, mem[i]);
		if (i % 2 == 0)
			mem[i] = min(mem[i / 2] + 1, mem[i]);
	}
	i = 0;
	printf("%d\n", mem[x]);
	return (0);
}


/*
int		ft_min(int a, int b)
{
	if (a == 0)
		return (b);
	if (b == 0)
		return (a);
	if (a < b)
		return (a);
	return (b);
}

int		ft_make_one(int base, int count, int x)
{
	int a, b, c;
	int min;

	if (base > x)
		return (0);
	if (base == x)
		return (count);
	a = ft_make_one(3 * base, count + 1, x);
	b = ft_make_one(2 * base, count + 1, x);
	c = ft_make_one(1 + base, count + 1, x);
	min = ft_min(ft_min(a, b), ft_min(b, c));
	return (min);
}


int		main(void)
{
	int		base;
	int		count;

	base = 1;
	count = 0;
	scanf("%d", &x);
	if (x != 1)
		count = ft_make_one(base, count, x);
	else
		count = 1;
//	while (x--)
//		printf("bridge_to_x[%d] : %d \n", x, bridge_to_x[x]);
	printf("%d", count);
}
*/
