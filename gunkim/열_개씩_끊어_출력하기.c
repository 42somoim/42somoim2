/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   열_개씩_끊어_출력하기.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 17:41:38 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/19 19:10:53 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> 

int		main(void)
{
	int		len;
	int		i;
	char	block_ten[101];

	scanf("%100s", block_ten);
	len = strlen(block_ten);
	if (len == 0)
		return (0);
	i = 0;
	while (i <= len)
	{
		printf("%.10s\n", block_ten + i);
		i += 10;
	}
	return (0);
}
