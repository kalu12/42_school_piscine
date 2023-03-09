/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:12:38 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/16 16:45:51 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = -1;
	while (x++ < 7)
	{
		y = x;
		while (y++ < 8)
		{
			z = y;
			while (z++ < 9)
			{
				ft_putchar(x + '0');
				ft_putchar(y + '0');
				ft_putchar(z + '0');
				if (!(x == 7))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
