/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   별_찍기_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 09:34:14 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/25 09:36:00 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	size_t		count;
	size_t		blank;
	size_t		star;
	size_t		row;

	scanf("%lu", &count);
	row = 0;
	while(row++ < count)
	{
		star = (row - 1) * 2 + 1;
		blank = count - row;;
		while (blank--)
			printf(" ");
		while (star--)
			printf("*");
		printf("\n");
	}
	return (0);
}
