/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 02:00:21 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/17 11:11:34 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_writeout(int nb)
{
	ft_putchar('-');
	ft_putnbr((0 - nb) / 10);
	ft_putchar((0 - nb) % 10 + '0');
}

void	ft_writeout1(int nb)
{
	ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb <= (-10))
		{
			if (nb == -2147483648)
			{
				ft_putnbr((0 - nb) / 10);
				ft_putchar('8');
			}
			else
				ft_writeout(nb);
		}
		else
		{
			ft_putchar('-');
			ft_putchar((0 - nb) + '0');
		}
	}
	else if (nb >= 10)
	{
		ft_writeout1(nb);
	}
	else
		ft_putchar(nb + '0');
}
