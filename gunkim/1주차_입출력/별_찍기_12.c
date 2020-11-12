/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   별_찍기_12.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 12:04:26 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/25 18:14:57 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	size_t		count;
	size_t		max_row;
	size_t		row;
	size_t		star;
	size_t		blank;

	scanf("%lu", &count);
	max_row = count * 2 - 1;
	row = 0;
	while (row++ < max_row)
	{
		star = row < count ? row : max_row - row + 1;
		blank = count - star;
		while (blank--)
			printf(" ");
		while (star--)
			printf("*");
		printf("\n");
	}
	return (0);
}
