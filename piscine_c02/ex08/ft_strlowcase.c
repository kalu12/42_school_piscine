/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:24:55 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/23 17:10:27 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	counter_x;

	counter_x = 0;
	while (str[counter_x] != '\0')
	{
		if ((64 < str[counter_x]) && (str[counter_x] < 91))
		{
			str[counter_x] = (str[counter_x] + 32);
		}
	counter_x++;
	}
	return (str);
}
