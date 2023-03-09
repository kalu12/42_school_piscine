/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:38:26 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/16 16:45:56 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	writeout(int x, int y, int z)
{
	ft_putchar((x / 10) + '0');
	ft_putchar((x % 10) + '0');
	ft_putchar(' ');
	ft_putchar((y / 10) + '0');
	ft_putchar((y % 10) + '0');
	if (z != 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	while (x < 100)
	{
		y = x + 1;
		while (y < 100)
		{
			if (x == 98 && y == 99)
			{
				z = 1;
			}
			else
			{
				z = 0;
			}
			writeout(x, y, z);
			y++;
		}
		x++;
	}
}
