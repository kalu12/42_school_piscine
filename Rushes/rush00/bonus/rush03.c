/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awilliam <awilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:26:52 by awilliam          #+#    #+#             */
/*   Updated: 2022/11/13 13:31:06 by awilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	conditional(int x, int y, int counter_x, int counter_y);

void	rush(int x, int y)
{
	int		counter_x;
	int		counter_y;

	counter_x = 0;
	counter_y = 0;
	if (x < 1 || y < 1)
	{
		write(1, "Please enter two positive integers!\n", 36);
		return ;
	}
	while (counter_y < y)
	{
		while (counter_x < x)
		{
			conditional(x, y, counter_x, counter_y);
			counter_x++;
		}
		counter_x = 0;
		ft_putchar('\n');
		counter_y++;
	}
}

void	conditional(int x, int y, int counter_x, int counter_y)
{
	if (counter_y == 0 || counter_y == y - 1)
	{
		if (counter_x == 0)
			ft_putchar('A');
		else if (counter_x == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (counter_x == 0 || counter_x == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}
