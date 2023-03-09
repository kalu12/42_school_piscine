/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:24:55 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/23 22:02:41 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	counter_x;

	counter_x = 0;
	while (str[counter_x] != '\0')
	{
		if ((64 < str[counter_x]) && (str[counter_x] < 91))
		{
			str[counter_x] = (str[counter_x] + 32);
		}
		if ((96 < str[counter_x]) && (str[counter_x] < 123))
		{
			if (str[counter_x - 1] <= 96 || str[counter_x - 1] >= 123)
				if (str[counter_x - 1] <= 64 || str[counter_x - 1] >= 91)
					str[counter_x] = (str[counter_x] - 32);
		}
	counter_x++;
	}
	return (str);
}
