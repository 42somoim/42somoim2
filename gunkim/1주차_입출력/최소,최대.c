/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   최소,최대.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 19:48:22 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/19 19:56:12 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	int		num;
	int		temp;
	int		max;
	int		min;
	
	scanf("%d", &num);
	if (num == 0)
	return (0);
	scanf("%d", &temp);
	max = temp;
	min = temp;
	while (--num)
	{
		scanf("%d", &temp); 
		if (temp > max)
			max = temp;
		if (temp < min)
			min = temp;
	}
	printf("%d %d", min, max);
	return (0);
}
