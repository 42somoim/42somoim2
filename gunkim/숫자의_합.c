/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11720.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:32:54 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/19 17:36:38 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		count;
	int		sum;
	
	scanf("%d", &count);
	getchar();
	if (!(0 <= count && count <= 100))
		return (0);
	sum = 0;
	while (count--)
		sum += fgetc(stdin) - '0';
	printf("%d", sum);
	return (0);
}
