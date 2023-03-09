/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 00:40:36 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/19 10:07:19 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	counter_x;

	counter_x = 0;
	while (str[counter_x] != '\0')
	{
		ft_putchar(str[counter_x]);
		counter_x++;
	}
}
