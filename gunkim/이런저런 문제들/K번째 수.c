/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11004.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <gunkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:37:03 by gunkim            #+#    #+#             */
/*   Updated: 2021/03/02 15:43:52 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		n, k;

int		accending(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

int		main(void)
{
	int		*tab;
	int		i;

	scanf("%d %d", &n, &k);
	tab = (int *)malloc(sizeof(int) * n);
	i = -1;
	while (++i < n - 1)
	{
		scanf("%d ", tab + i);
	}
	scanf("%d", tab + i);
	qsort(tab, n, sizeof(int), accending);
	printf("%d", tab[k - 1]);
	return (0);
}