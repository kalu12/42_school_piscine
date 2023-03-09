/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_nb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgkoris <dgkoris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 20:01:40 by coder             #+#    #+#             */
/*   Updated: 2022/11/27 22:57:18 by dgkoris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_print(int a, int max_rows, char **c);
int		ft_power(int nb, int power);

void	ft_1(unsigned int *a, int *g, int *h, char **array)
{
	int	d;

	d = 0;
	ft_print(a[g[1]], h[1], array);
	ft_print(100, h[1], array);
	g[0] = 1;
}

void	ft_2(unsigned int *a, int *g, int *h, char **array)
{
	int	d;

	d = 0;
	d = a[g[1]] * 10 + a[g[1] + 1];
	ft_print(d, h[1], array);
	g[0] = 1;
	g[2] = 1;
}

void	ft_3(unsigned int *a, int *g, int *h, char **array)
{
	int	d;

	d = 0;
	d = a[g[1]] * 10;
	ft_print(d, h[1], array);
	g[0] = 1;
}

void	ft_4(int *g, int *h, char **array, unsigned int *a)
{
	int	d;

	d = 0;
	if ((a[g[1]] != 0) && (g[2] != 1))
	{
		ft_print(a[g[1]], h[1], array);
		g[0] = 1;
	}
	if ((g[1] != h[0] - 1) && (g[0] == 1))
	{
		d = ft_power(1000, (h[0] - g[1]) / 3);
		ft_print(d, h[1], array);
	}
}

void	single_nb(int *h, unsigned int *a, char **array)
{
	int	g[3];

	g[1] = 0;
	while (g[1] < h[0])
	{
		if ((g[1] % 3 == h[0] % 3) && a[g[1]] != 0)
			ft_1(a, g, h, array);
		if ((g[1] % 3 == (h[0] + 1) % 3) && a[g[1]] != 0)
		{
			if (a[g[1]] == 1)
			{
				ft_2(a, g, h, array);
				g[1]++;
			}
			else
				ft_3(a, g, h, array);
		}
		if (g[1] % 3 == (h[0] + 2) % 3)
			ft_4(g, h, array, a);
		g[0] = 0;
		g[2] = 0;
		g[1]++;
	}
}

// g[0] = togle
// g[2] = tog