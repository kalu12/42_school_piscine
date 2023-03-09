/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:24:55 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/23 17:08:59 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	counter_x;

	counter_x = 0;
	while (str[counter_x] != '\0')
	{
		if ((96 < str[counter_x]) && (str[counter_x] < 123))
		{
			str[counter_x] = (str[counter_x] - 32);
		}
	counter_x++;
	}
	return (str);
}
