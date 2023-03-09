/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navu <navu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:51:28 by kkaimov           #+#    #+#             */
/*   Updated: 2022/11/20 23:15:59 by navu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/* calculating a number of visible boxes */
int	n_box(int a, int b, int c, int d)
{
	int	res;

	res = 1;
	if (b > a)
		res++;
	if (c > b && c > a)
		res++;
	if (d > c && d > b && d > a)
		res++;
	return (res);
}

/* checking a uniqueness of symbols in each column */
int	ft_check_unique(int **map)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j <= 3)
	{
		i = 0;
		while (i <= 3)
		{
			k = i + 1;
			while (k <= 3)
			{
				if (map[i][j] == map[k][j])
					return (0);
				k++;
			}
			i++;
		}
		j++;
	}
	return (1);
}

/* checking a number of visible boxes in the columns */
int	check_cols(int **map, int *set)
{
	if ((n_box(map[0][0], map[1][0], map[2][0], map[3][0]) != set[0]))
		return (0);
	if ((n_box(map[0][1], map[1][1], map[2][1], map[3][1]) != set[1]))
		return (0);
	if ((n_box(map[0][2], map[1][2], map[2][2], map[3][2]) != set[2]))
		return (0);
	if ((n_box(map[0][3], map[1][3], map[2][3], map[3][3]) != set[3]))
		return (0);
	if ((n_box(map[3][0], map[2][0], map[1][0], map[0][0]) != set[4]))
		return (0);
	if ((n_box(map[3][1], map[2][1], map[1][1], map[0][1]) != set[5]))
		return (0);
	if ((n_box(map[3][2], map[2][2], map[1][2], map[0][2]) != set[6]))
		return (0);
	if ((n_box(map[3][3], map[2][3], map[1][3], map[0][3]) != set[7]))
		return (0);
	return (1);
}

/* checking a number of visible boxes in the rows */
int	check_rows(int **map, int *set)
{
	if ((n_box(map[0][0], map[0][1], map[0][2], map[0][3]) != set[8]))
		return (0);
	if ((n_box(map[1][0], map[1][1], map[1][2], map[1][3]) != set[9]))
		return (0);
	if ((n_box(map[2][0], map[2][1], map[2][2], map[2][3]) != set[10]))
		return (0);
	if ((n_box(map[3][0], map[3][1], map[3][2], map[3][3]) != set[11]))
		return (0);
	if ((n_box(map[0][3], map[0][2], map[0][1], map[0][0]) != set[12]))
		return (0);
	if ((n_box(map[1][3], map[1][2], map[1][1], map[1][0]) != set[13]))
		return (0);
	if ((n_box(map[2][3], map[2][2], map[2][1], map[2][0]) != set[14]))
		return (0);
	if ((n_box(map[3][3], map[3][2], map[3][1], map[3][0]) != set[15]))
		return (0);
	return (1);
}

/* combining all previous checks */
int	ft_check(int **map, int *set)
{
	if (ft_check_unique(map) == 0)
		return (0);
	else
	{
		if (!check_cols(map, set))
			return (0);
		if (!check_rows(map, set))
			return (0);
	}
	return (1);
}
