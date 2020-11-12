/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   별_찍기_9.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 13:10:08 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/25 18:10:31 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	size_t		count;
	size_t		row;
	size_t		max_row;
	size_t		blank;
	size_t		star;

	scanf("%lu", &count);
	row = 0;
	max_row = count * 2 - 1;
	while(row++ < max_row)
	{
		blank = row <= count ? row - 1 : max_row - row;
		star = max_row - 2 * blank;
		while (blank--)
			printf(" ");
		while (star--)
			printf("*");
		printf("\n");
	}
	return (0);
}
