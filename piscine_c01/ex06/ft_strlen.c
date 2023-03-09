/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:09:43 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/19 14:00:06 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter_x;

	counter_x = 0;
	while (str[counter_x] != '\0')
	{
		counter_x++;
	}
	return (counter_x);
}
