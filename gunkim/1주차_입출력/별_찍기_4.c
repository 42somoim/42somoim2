/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   별_찍기_4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 09:18:47 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/25 09:32:37 by gunkim           ###   ########.fr       */
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
	while(count--)
	{
		blank = row++;
		star = count + 1;
		while (blank--)
			printf(" ");
		while (star--)
			printf("*");
		printf("\n");
	}
	return (0);
}
