/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A+B-8.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:20:21 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/12 18:24:36 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		T;
	int		*tab_a;
	int		*tab_b;
	int		i;

	scanf("%d", &T);
	tab_a = (int *)malloc(sizeof(int) * T);
	tab_b = (int *)malloc(sizeof(int) * T);
	i = 0;
	while (i < T)
	{
		scanf("%d %d", &tab_a[i], &tab_b[i]);
		i++;
	}
	i = 0;
	while (i < T)
	{
		printf("Case #%d: %d + %d = %d\n", i + 1, tab_a[i], tab_b[i], tab_a[i] + tab_b[i]); 
		i++;
	}
	free(tab_a);
	free(tab_b);
	return (0);
}
