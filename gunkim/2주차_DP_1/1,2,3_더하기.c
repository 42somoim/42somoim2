/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1,2,3_더하기.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:23:14 by gunkim            #+#    #+#             */
/*   Updated: 2020/11/04 00:36:27 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	mem[16];

int main(void)
{
	int		count;
	int		x;
	int		i;

	mem[1] = 1;
	mem[2] = 2;
	mem[3] = 4;
	i = 3;
	while (++i < 11)
		mem[i] = mem[i - 3] + mem[i - 2] + mem[i - 1];
	scanf("%d", &count);
	while(count--)
	{
		scanf("%d", &x);
		printf("%d\n", mem[x]);
	}
	return (0);
}
