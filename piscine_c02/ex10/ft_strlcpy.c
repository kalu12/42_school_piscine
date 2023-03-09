/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 00:29:01 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/23 18:02:20 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter_x;

	counter_x = 0;
	if (size > 0)
	{
		while ((src[counter_x] != '\0') && (counter_x < (size - 1)))
		{
			dest[counter_x] = src[counter_x];
			counter_x++;
		}
		dest[counter_x] = '\0';
	}
	counter_x = 0;
	while (src[counter_x] != '\0')
		counter_x++;
	return (counter_x);
}
