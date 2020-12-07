/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   제곱수의 합.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:21:39 by gunkim            #+#    #+#             */
/*   Updated: 2020/12/07 18:13:54 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))

int		main(void)
{
	int		mem[100001] = {0};
	int		num, idx, root, min;

	scanf("%d", &num);
	idx = 1;
	while (idx <= num)
	{
		root = 1;
		min = 255;
		while (idx - root * root >= 0)
		{
			min = MIN(min, mem[idx - root * root]);
			root++;
		}
		mem[idx] = min + 1;
		idx++;
	}
/*
	idx = 0;
	while (idx <= num)
	{
		printf("mem[%d] : %d\n", idx, mem[idx]);
		idx++;
	}
	*/
	printf("%d", min + 1);
	return (0);
}
