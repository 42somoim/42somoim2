/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   별_찍기_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 09:25:11 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/25 09:26:34 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	size_t		count;
	size_t		row;

	scanf("%lu", &count);
	while(count)
	{
		row = count;
		while (row--)
			printf("*");
		printf("\n");
		count--;
	}
	return (0);
}
