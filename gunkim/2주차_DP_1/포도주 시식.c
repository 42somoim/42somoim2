/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   포도주 시식.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 04:34:16 by gunkim            #+#    #+#             */
/*   Updated: 2020/11/16 04:54:57 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define MAX(X, Y) (X > Y ? X : Y)

int		main(void)
{
	int	n;
	int	i;
	int	mem[10001][5];
	int	wine[10001];

	scanf("%d", &n);
	i = 0;
	while (i++ < n)
	{
		scanf("%d", &wine[i]);
	}
	mem[1][1] = wine[1];
	mem[1][2] = wine[1];
	mem[2][1] = mem[1][3] + wine[2];
	mem[2][2] = mem[1][1] + wine[2];
	mem[2][3] = mem[1][1];
	i = 2;
	while (i++ < n)
	{
		mem[i][1] = MAX(mem[i - 1][3], mem[i - 1][4]) + wine[i];
		mem[i][2] = MAX(mem[i - 2][3], mem[i - 2][4]) + wine[i - 1] +  wine[i];
		mem[i][3] = MAX(mem[i - 1][1], mem[i - 1][2]);
		mem[i][4] = MAX(mem[i - 2][1], mem[i - 2][2]);
	}
	printf("%d\n", MAX(MAX(mem[n][1], mem[n][2]), MAX(mem[n][3], mem[n][4])));
	return (0);
}
