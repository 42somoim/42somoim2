/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   별_찍기_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 09:11:52 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/25 09:16:16 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	size_t		count;
	size_t		row;
	size_t		col;

	scanf("%lu", &count);
	row = 0;
	while(row++ < count)
	{
		col = 0;
		while (col++ < row)
			printf("*");
		printf("\n");
	}
	return (0);
}
