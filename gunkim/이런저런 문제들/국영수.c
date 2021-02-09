/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   국영수.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <gunkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 22:29:23 by gunkim            #+#    #+#             */
/*   Updated: 2021/02/09 22:29:32 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int				n;

typedef struct	s_member
{
	char			name[11];
	int				korean;
	int				english;
	int				math;
}				t_member;

void	ft_sort_english(t_member *members, int start, int end);
void	ft_sort_math(t_member *members, int start, int end);
void	ft_sort_name(t_member *members, int start, int end);

int		compare_korean(const void *a, const void *b)
{
	t_member	*sa = (t_member *)a;
	t_member	*sb = (t_member *)b;

	if (sb->korean - sa->korean > 0)
		return (1);
	else if ((sb->korean - sa->korean) < 0)
		return (-1);
	else
		return (0);
}

// int		compare_korean(const void *a, const void *b)
// {
// 	t_member	*sa = (t_member *)a;
// 	t_member	*sb = (t_member *)b;

// 	return (sb->korean - sa->korean > 0);
// }

// int		compare_korean(const void *a, const void *b)
// {
// 	t_member	*sa = (t_member *)a;
// 	t_member	*sb = (t_member *)b;

// 	return (sb->korean - sa->korean);
// }

int		compare_english(const void *a, const void *b)
{
	t_member	*sa = (t_member *)a;
	t_member	*sb = (t_member *)b;

	return (sa->english - sb->english);
}

int		compare_math(const void *a, const void *b)
{
	t_member	*sa = (t_member *)a;
	t_member	*sb = (t_member *)b;

	return (sb->math - sa->math);
}

int		compare_name(const void *a, const void *b)
{
	t_member	*sa = (t_member *)a;
	t_member	*sb = (t_member *)b;

	return (strcmp(sa->name, sb->name));
}

void	ft_sort_english(t_member *members, int start, int end)
{
	int		idx_s;
	int		idx_e;
	int		korean;
	int		i;

	idx_s = start;
	korean = members[start].korean;
	i = start;
	while (++i < end)
	{
		if (korean != members[i].korean)
		{
			idx_e = i;
			qsort(members + idx_s, idx_e - idx_s, sizeof(t_member), compare_english);
			ft_sort_math(members, idx_s, i);
			idx_s = i;
			korean = members[i].korean;
		}
	}
	qsort(members + idx_s, i - idx_s, sizeof(t_member), compare_english);
	ft_sort_math(members, idx_s, i);
}

void	ft_sort_math(t_member *members, int start, int end)
{
	int		idx_s;
	int		idx_e;
	int		english;
	int		i;

	idx_s = start;
	english = members[start].english;
	i = start;
	while (++i < end)
	{
		if (english != members[i].english)
		{
			idx_e = i;
			qsort(members + idx_s, idx_e - idx_s, sizeof(t_member), compare_math);
			ft_sort_name(members, idx_s, i);
			idx_s = i;
			english = members[i].english;
		}
	}
	qsort(members + idx_s, i - idx_s, sizeof(t_member), compare_math);
	ft_sort_name(members, idx_s, i);
}

void	ft_sort_name(t_member *members, int start, int end)
{
	int		idx_s;
	int		idx_e;
	int		math;
	int		i;

	idx_s = start;
	math = members[start].math;
	i = start;
	while (++i < end)
	{
		if (math != members[i].math)
		{
			idx_e = i;
			qsort(members + idx_s, idx_e - idx_s, sizeof(t_member), compare_name);
			idx_s = i;
			math = members[i].math;
		}
	}
	qsort(members + idx_s, i - idx_s, sizeof(t_member), compare_name);
}

int		main(void)
{
	int			i;
	t_member	*members;

	scanf("%d", &n);
	// n = 12;
	members = (t_member *)malloc(sizeof(t_member) * n);
	// strcpy(members[0].name, "Junkyu");
	// members[0].korean = 50;
	// members[0].english = 60;
	// members[0].math = 100;
	// strcpy(members[1].name, "Sangkeun");
	// members[1].korean = 80;
	// members[1].english = 60;
	// members[1].math = 50;
	// strcpy(members[2].name, "Sunyoung");
	// members[2].korean = 80;
	// members[2].english = 70;
	// members[2].math = 100;
	// strcpy(members[3].name, "Soong");
	// members[3].korean = 50;
	// members[3].english = 60;
	// members[3].math = 90;
	// strcpy(members[4].name, "Haebin");
	// members[4].korean = 50;
	// members[4].english = 60;
	// members[4].math = 100;
	// strcpy(members[5].name, "Kangsoo");
	// members[5].korean = 60;
	// members[5].english = 80;
	// members[5].math = 100;
	// strcpy(members[6].name, "Donghyuk");
	// members[6].korean = 80;
	// members[6].english = 60;
	// members[6].math = 100;
	// strcpy(members[7].name, "Sei");
	// members[7].korean = 70;
	// members[7].english = 70;
	// members[7].math = 70;
	// strcpy(members[8].name, "Wonseob");
	// members[8].korean = 70;
	// members[8].english = 70;
	// members[8].math = 90;
	// strcpy(members[9].name, "Sanghyun");
	// members[9].korean = 70;
	// members[9].english = 70;
	// members[9].math = 80;
	// strcpy(members[10].name, "nsj");
	// members[10].korean = 80;
	// members[10].english = 80;
	// members[10].math = 80;
	// strcpy(members[11].name, "Taewhan");
	// members[11].korean = 50;
	// members[11].english = 60;
	// members[11].math = 90;
	i = -1;
	while (++i < n)
		scanf("%s %d %d %d", members[i].name, &members[i].korean, &members[i].english, &members[i].math);
	qsort(members, n, sizeof(t_member), compare_korean);
	ft_sort_english(members, 0, n);
	// ft_sort_math(members);
	// ft_sort_name(members);
	i = -1;
	while (++i < n)
		printf("%s\n", members[i].name);
		// printf("%s\n", members[i].name, members[i].korean, members[i].english, members[i].math);
	return (0);
}
