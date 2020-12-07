/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   계단오르기.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 13:42:57 by gunkim            #+#    #+#             */
/*   Updated: 2020/12/07 16:52:36 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

int		main(void)
{
	int		n, i;
	int		arr[301] = {0};
	int		mem[301][4] = {0, };

	scanf("%d", &n);
	i = 0;
	while (i++ < n)
		scanf("%d", &arr[i]);
	i = 0;
	while (++i < n)
	{
		mem[i][1] = mem[i - 1][3] + arr[i];
		mem[i][2] = mem[i - 1][1] + arr[i];
		mem[i][3] = MAX(mem[i - 1][1], mem[i - 1][2]);
		mem[i][0] = MAX(MAX(mem[i][1], mem[i][2]), mem[i][3]);
	}
	mem[i][1] = mem[i - 1][3] + arr[i];
	mem[i][2] = mem[i - 1][1] + arr[i];
	mem[i][0] = MAX(mem[i][1], mem[i][2]);
	printf("mem[%d][0] : %d", i, mem[i][0]);
/*
	printf("\n\n");
	i = -1;
	while (i++ <= n)
		printf("arr[%2d] : %2d  ||", i, arr[i]);
	printf("\n");
	i = -1;
	while (i++ <= n)
		printf("mem[%2d] : %2d  ||", i, mem[i][1]);
	printf("\n");
	i = -1;
	while (i++ <= n)
		printf("mem[%2d] : %2d  ||", i, mem[i][2]);
	printf("\n");
	i = -1;
	while (i++ <= n)
		printf("mem[%2d] : %2d  ||", i, mem[i][3]);
	printf("\n");
	i = -1;
	while (i++ <= n)
		printf("mem[%2d] : %2d  ||", i, mem[i][0]);
	printf("\n");
	return (0); 
	*/
}
