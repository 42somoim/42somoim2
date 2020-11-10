/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   스티커.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <gunkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 18:55:08 by gunkim            #+#    #+#             */
/*   Updated: 2020/11/10 23:26:52 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

int		main(void)
{
	int		T;
	int		n;
	int		i;

	int		stickers[100001][2] = { 0, };
	int		mem[100001][2] = { 0, };

	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &n);
		i = 0;
		while (i++ < n - 1)
		{
			scanf("%d ", &stickers[i][0]);
		}
		scanf("%d", &stickers[i][0]);
		i = 0;
		while (i++ < n - 1)
		{
			scanf("%d ", &stickers[i][1]);
		}
		scanf("%d", &stickers[i][1]);

		mem[1][0] = stickers[1][0];
		mem[1][1] = stickers[1][1];
		i = 1;

		while (i <= n)
		{
			mem[i][0] = stickers[i][0] + MAX(mem[i - 1][1], mem[i - 2][1]);
			mem[i][1] = stickers[i][1] + MAX(mem[i - 1][0], mem[i - 2][0]);
			i++;
		}
		i--;
		printf("%d\n", MAX(mem[i][0], mem[i][1]));
	}
}