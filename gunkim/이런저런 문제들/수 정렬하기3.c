/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10989.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <gunkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 14:42:15 by gunkim            #+#    #+#             */
/*   Updated: 2021/03/01 11:20:20 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		n;
int		stack[10001] = {0};

int		main(void)
{
	int		nbr;

	scanf("%d", &n);
	int i = -1;
	while (++i < n)
	{
		scanf("%d", &nbr);
		stack[nbr]++;
	}
	nbr = -1;
	while (nbr < 10001)
	{
		while (stack[nbr]--)
		{
			printf("%d\n", nbr);
		}
		nbr++;
	}
	return (0);
}