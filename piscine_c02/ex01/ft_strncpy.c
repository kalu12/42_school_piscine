/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:49:13 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/23 18:00:58 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter_x;

	counter_x = 0;
	while (src[counter_x] != '\0' && counter_x < n)
	{
		dest[counter_x] = src[counter_x];
		counter_x++;
	}
	while (counter_x < n)
	{
		dest[counter_x] = '\0';
		counter_x++;
	}
	return (dest);
}
