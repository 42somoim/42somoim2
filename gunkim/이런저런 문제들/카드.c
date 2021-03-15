/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11652.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <gunkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 11:24:03 by gunkim            #+#    #+#             */
/*   Updated: 2021/03/01 15:55:04 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

long long int	 	card[100001] = {0};
int				    n;

int		compare(const void *a, const void *b)
{
	long long int	ca = *(long long int *)a;
	long long int	cb = *(long long int *)b;

	if (ca > cb)
		return (1);
	else if (ca == cb)
		return (0);
	return (-1);
}

int			main(void)
{
    int i, j;
	long long int	nbr;
	long long int   max, curnbr, maxnbr;

	scanf("%d", &n);
	i = -1;
	while (++i < n)
	{
		scanf("%lld", &nbr);
		card[i] = nbr;
	}
	qsort(card, n, sizeof(long long int), compare);
	i = -1;
	j = 0;
	max = 1;
	curnbr = card[0];
	maxnbr = card[0];
	while (++i <= n)
	{
		if (curnbr != card[i] || i == n)
        {
			if (max < i - j)
			{
                maxnbr = card[i - 1];
                max = i - j;
            }
            curnbr = card[i];
			j = i;
		}
	}
	printf("%lld\n", maxnbr);
	return (0);
}