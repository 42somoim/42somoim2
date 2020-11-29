/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   가장 긴 바이토닉 부분 수열.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:24:12 by gunkim            #+#    #+#             */
/*   Updated: 2020/11/28 21:22:03 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define macro_max(a, b) (((a) > (b)) ? (a) : (b))

int		main(void)
{
	int		n, i, j;
	int		s[1002];
	int		up[1002] = {};
//	int		memup[1001] = {};
	int		down[1002] = {};
//	int		memdown[1001] = {};
//	int		max_u, max_d;
	int		max;

	i = 0;
	scanf("%d", &n);
	while (++i < n)
		scanf("%d ", &s[i]);
	scanf("%d", &s[i]);
//	up[1] = s[1];
	i = 0;
	while (i++ < n)
	{
		j = i + 1;
		while (--j)
			if (s[j - 1] < s[i] && up[j - 1] > up[i])
				up[i] = up[j - 1];
		up[i]++;
	}
	i = n;
	while (i)
	{
		j = i;
		while (j <= n)
		{
			if (s[j + 1] < s[i] && down[j + 1] > down[i])
				down[i] = down[j + 1];
			j++;
		}
		down[i]++;
		i--;
	}
	max = 0;
	i = 0;
	while (i++ < n)
		max = macro_max(max, up[i] + down[i]);
	printf("%d\n", max - 1);
	return (0);
/*
	i = 0;
	while (i++ < n)
		printf("   s[%02d] ", i);
	printf("\n");
	i = 0;
	while (i++ < n)
		printf("%8d ", s[i]);
	printf("\n");
	i = 0;
	while (i++ < n)
		printf("  up[%02d] ", i);
	printf("\n");
	i = 0;
	while (i++ < n)
		printf("%8d ", up[i]);
	printf("\n");
	i = 0;
	while (i++ < n)
		printf("down[%02d] ", i);
	printf("\n");
	i = 0;
	while (i++ < n)
		printf("%8d ", down[i]);
	printf("\n");

	return (0);
*/
/*	i = 0;
	max_u = 1;;
	while (++i < n)
	{
		j = max_u;
		if (up[j - 1] < s[i])
		{
			up[j] = s[i];
			memup[i] = max_u;
			max_u++;
		}
		j--;
		while (j && up[j - 1] < s[i])
		{
			if (s[i] < up[j])
			{
				up[j] = s[i];
			}
			j--;
		}
	}
	i = n + 1;
	max_d = 1;
	while (--i)
	{
		j = max_d;
		if (down[j - 1] < s[i])
		{
			down[j] = s[i];
			memdown[i] = max_d;
			max_d++;
		}
		j--;
		while (j && down[j - 1] < s[i])
		{
			if (s[i] < down[j])
			{
				down[j] = s[i];
			}
			j--;
		}
	}

	i = 0;
	while (i++ < n)
		printf("   s[%02d] ", i);
	printf("\n");
	i = 0;
	while (i++ < n)
		printf("%8d ", s[i]);
	printf("\n");
	i = 0;
	while (i++ < n)
		printf("  up[%02d] ", i);
	printf("\n");
	i = 0;
	while (i++ < n)
		printf("%8d ", up[i]);
	printf("\n");
	i = 0;
	while (i++ < n)
		printf(" mup[%02d] ", i);
	printf("\n");
	i = 0;
	while (i++ < n)
		printf("%8d ", memup[i]);
	printf("\n");
	i = 0;
	while (i++ < n)
		printf("  do[%02d] ", i);
	printf("\n");
	i = 0;
	while (i++ < n)
		printf("%8d ", down[i]);
	printf("\n");
	i = 0;
	while (i++ < n)
		printf(" mdo[%02d] ", i);
	printf("\n");
	i = 0;
	while (i++ < n)
		printf("%8d ", memdown[i]);
	*/
}
