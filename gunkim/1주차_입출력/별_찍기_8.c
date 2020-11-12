/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   별_찍기_8.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 09:37:12 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/25 09:47:34 by gunkim           ###   ########.fr       */
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
		star = row <= count ? row : max_row - row + 1;
		blank = (count - star) * 2;
		while (star--)
			printf("*");
		while (blank--)
			printf(" ");
		star = row <= count ? row : max_row - row + 1;
		while (star--)
			printf("*");
		printf("\n");
	}
	return (0);
}
