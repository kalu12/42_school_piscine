/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navu <navu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:21:22 by kkaimov           #+#    #+#             */
/*   Updated: 2022/11/20 23:22:59 by navu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/* filling map with a rows of numbers from template and checking */
int	fill_map(int **map, int *set, int **template, int *i)
{
	map[0] = template[i[0]];
	map[1] = template[i[1]];
	map[2] = template[i[2]];
	map[3] = template[i[3]];
	if (ft_check(map, set) == 1)
	{
		print(map, 4, 4);
		free_map(map, 4);
		free_template(template, 24, i);
		free(set);
		free(i);
		return (1);
	}
	return (0);
}

/* checking all possible maps by changing the rows */
void	broodforce(int **map, int *set, int **template)
{
	int	*i;

	i = (int *)malloc(4 * sizeof(int));
	if (i == NULL)
		return ;
	i[0] = -1;
	while (++i[0] < 24)
	{
		i[1] = -1;
		while (++i[1] < 24)
		{
			i[2] = -1;
			while (++i[2] < 24)
			{
				i[3] = -1;
				while (++i[3] < 24)
				{
					if (fill_map(map, set, template, i))
						return ;
				}
			}
		}
	}
	write(1, "Error\n", 6);
}

/* main; checking for the number of arguments and correctness of the input */
int	main(int ac, char **av)
{
	int	**map;
	int	**template;
	int	*set;

	if (ac == 2)
	{
		map = init(4, 4);
		template = create_template();
		if (!input_check(av[1]))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		set = trim(av[1]);
		broodforce(map, set, template);
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
}
