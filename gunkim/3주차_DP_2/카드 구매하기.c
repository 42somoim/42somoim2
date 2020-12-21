/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   카드 구매하기.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 19:45:56 by gunkim            #+#    #+#             */
/*   Updated: 2020/12/22 03:32:18 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

int		main(void)
{
	int		n, i, j;
	int		arr[1001] = {0};
	int		mem[1001] = {0};

	scanf("%d", &n);
	i = 0;
	while (++i < n)
		scanf("%d ", arr + i);
	scanf("%d", arr + i);
	i = 0;
	while (++i <= n)
	{
		j = 0;
		while (++j <= i)
		{
			mem[i] = MAX(mem[i], mem[i - j] + arr[j]);
		}
	}
	printf("%d", mem[n]);
	return (0);
}
