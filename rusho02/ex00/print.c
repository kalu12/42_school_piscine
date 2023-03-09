/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgkoris <dgkoris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:07:15 by dgkoris           #+#    #+#             */
/*   Updated: 2022/11/27 17:19:53 by dgkoris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_power(int nb, int power);

int	ft_lennb(int nb)
{
	int	b;
	int	len_nb;

	b = 0;
	len_nb = 0;
	b = nb;
	while (b != 0)
	{
		b = b / 10;
		len_nb++;
	}
	len_nb--;
	return (len_nb);
}

int	ft_check(char **c, int y, int lennb, int nb)
{
	int	b;

	b = nb / ft_power(10, ft_lennb(nb));
	if (((c[y][0] == b + '0') && (c[y][lennb] == nb % 10 + '0'))
	&& ((c[y][lennb + 1] < '0') || (c[y][lennb + 1] > '9')))
		return (1);
	return (0);
}

void	ft_print(int nb, int max_rows, char **c)
{
	int	i;
	int	y;
	int	b;

	y = 0;
	b = nb / ft_power(10, ft_lennb(nb));
	while (y < max_rows)
	{
		i = 0;
		if (ft_check(c, y, ft_lennb(nb), nb) == 1)
		{
			write(1, " ", 1);
			while (c[y][i] != ':')
				i++;
			i++;
			while (c[y][i] == ' ')
				i++;
			while (c[y][i] != '\0')
			{
				write(1, &c[y][i], 1);
				i++;
			}
		}
		y++;
	}
}
