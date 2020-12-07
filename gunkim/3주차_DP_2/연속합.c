/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   연속합.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 21:22:22 by gunkim            #+#    #+#             */
/*   Updated: 2020/12/07 13:24:31 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

int		main(void)
{
	int		n, i;
	int		arr[100001];
	int		mem[100001];
	int		max;

	scanf("%d", &n);
	i = 0;
	while (++i < n)
		scanf("%d ", &arr[i]);
	scanf("%d", &arr[i]);
	i = 1;
	max = arr[i];
	while (i <= n)
	{
		mem[i] = MAX(mem[i - 1] + arr[i], arr[i]);
		if (max < mem[i])
			max = mem[i];
		i++;
	}
	printf("%d", max);
}
