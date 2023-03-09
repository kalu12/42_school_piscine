/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:24:55 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/23 18:01:57 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	counter_x;
	int	ret;

	counter_x = 0;
	ret = 1;
	while (str[counter_x] != '\0')
	{
		if ((64 >= str[counter_x]) || (str[counter_x] >= 91))
		{
			ret = 0;
			break ;
		}
	counter_x++;
	}
	return (ret);
}
