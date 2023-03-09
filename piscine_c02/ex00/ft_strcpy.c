/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:26:41 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/23 18:01:21 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	counter_x;

	counter_x = 0;
	while (src[counter_x] != '\0')
	{
		dest[counter_x] = src[counter_x];
		counter_x++;
	}
	dest[counter_x] = '\0';
	return (dest);
}
