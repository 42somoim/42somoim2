/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   별_찍기_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 09:18:47 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/25 09:23:32 by gunkim           ###   ########.fr       */
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
		star = row;
		blank = count - star;
		while (blank--)
			printf(" ");
		while (star--)
			printf("*");
		printf("\n");
	}
	return (0);
}
