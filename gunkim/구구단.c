/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   구구단.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 19:19:58 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/19 19:22:38 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	int		n;
	int		i;

	scanf("%d", &n);
	i = 1;
	while (i <= 9)
	{
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
	}
	return (0);
}
