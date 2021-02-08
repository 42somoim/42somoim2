/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   나이순 정렬.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 23:20:01 by gunkim            #+#    #+#             */
/*   Updated: 2021/01/20 14:23:39 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int				n;

typedef struct	s_member
{
	int				age;
	int				order;
	char			name[100];
}				t_member;

int		compare_age(const void *a, const void *b)
{
	t_member	*sa = (t_member *)a;
	t_member	*sb = (t_member *)b;

	return (sa->age - sb->age);
}

int		compare_name(const void *a, const void *b)
{
	t_member	*sa = (t_member *)a;
	t_member	*sb = (t_member *)b;

	return (strcmp(sa->name, sb->name) < 0);
}

int		compare_order(const void *a, const void *b)
{
	t_member	*sa = (t_member *)a;
	t_member	*sb = (t_member *)b;

	return (sa->order > sb->order);
}

void	ft_sort(t_member *members)
{
	int		idx_s;
	int		idx_e;
	int		age;
	int		i;

	qsort(members, n, sizeof(t_member), compare_age);
	idx_s = 0;
	age = members[0].age;
	i = 0;
	while (++i < n)
	{
		if (age != members[i].age)
		{
			idx_e = i;
			qsort(members + idx_s, idx_e - idx_s, sizeof(t_member), compare_order);
			idx_s = i;
			age = members[i].age;
		}
	}
	qsort(members + idx_s, i - idx_s, sizeof(t_member), compare_order);
}

int		main(void)
{
	int			i;
	t_member	*members;

	scanf("%d", &n);
	// n = 10;
	members = (t_member *)malloc(sizeof(t_member) * n);
	// members[0].age = 1;
	// members[0].order = 1;
	// strcpy(members[0].name, "a");
	// members[1].age = 2;
	// members[1].order = 2;
	// strcpy(members[1].name, "b");
	// members[2].age = 3;
	// members[2].order = 3;
	// strcpy(members[2].name, "c");
	// members[3].age = 4;
	// members[3].order = 4;
	// strcpy(members[3].name, "d");
	// members[4].age = 1;
	// members[4].order = 5;
	// strcpy(members[4].name, "d");
	// members[5].age = 1;
	// members[5].order = 6;
	// strcpy(members[5].name, "c");
	// members[6].age = 3;
	// members[6].order = 7;
	// strcpy(members[6].name, "d");
	// members[7].age = 2;
	// members[7].order = 8;
	// strcpy(members[7].name, "d");
	// members[8].age = 4;
	// members[8].order = 9;
	// strcpy(members[8].name, "d");
	// members[9].age = 2;
	// members[9].order = 10;
	// strcpy(members[9].name, "a");
	i = -1;
	while (++i < n && (members[i].order = i + 1))
		scanf("%d %s", &members[i].age, members[i].name);
	ft_sort(members);
	i = -1;
	while (++i < n)
		printf("%d %s\n", members[i].age, members[i].name);

	return (0);
}
