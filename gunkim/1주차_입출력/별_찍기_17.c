/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   별_찍기_17.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:54:50 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/25 20:03:22 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	size_t	count;
	size_t	row;
	size_t	col;
	size_t	col_max;
	size_t	mid;
	size_t	decal;

	scanf("%lu", &count);
	row = 0;
	mid = count;
	while (row++ < count)
	{
		col = 0;
		col_max = count + row - 1;
		while (col++ < col_max)
		{
			if (row != 1 && row == count)
			{
				printf("*");
			}
			else if (row % 2 == 1)
			{
				decal = row / 2;
				if ((mid - 2 *decal == col) || (col == mid + 2 * decal))
					printf("*");
				else
					printf(" ");
			}
			else
			{
				decal = row / 2; 
				if ((mid - 2 *decal + 1 == col) || (col == mid + 2 * decal - 1))
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
}
