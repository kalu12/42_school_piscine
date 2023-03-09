/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navu <navu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:42:42 by kkaimov           #+#    #+#             */
/*   Updated: 2022/11/20 23:25:32 by navu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/* displaying a character on the screen */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* displaying a 2D array on the screen */
void	print(int **map, int rows, int cols)
{
	int	i;
	int	j;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			ft_putchar(map[i][j] + '0');
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

/* checking the correctness of the input */
int	input_check(char *str)
{
	int	i;

	i = 0;
	if (!(str[31] == '\0'))
		return (0);
	while (i < 31)
	{
		if (str[i] - '0' % 2 == 0 && !(str[i] >= '1' && str[i] <= '4'))
			return (0);
		if (str[i] - '0' % 2 == 1 && str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

/* free the map */
void	free_map(int **arr, int size)
{
	int	i;
	int	*tmp;

	i = 0;
	while (i < size)
	{
		tmp = arr[i++];
		free(tmp);
	}
	free (arr);
}

/* free the template */
void	free_template(int **arr, int size, int *i)
{
	int	*tmp;
	int	j;

	j = 0;
	while (j < size)
	{
		if (j != i[0] && j != i[1] && j != i[2] && j != i[3])
		{
			tmp = arr[j];
			free(tmp);
		}
		j++;
	}
	free (arr);
}
