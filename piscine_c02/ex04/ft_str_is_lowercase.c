/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:24:55 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/23 18:01:50 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	counter_x;
	int	ret;

	counter_x = 0;
	ret = 1;
	while (str[counter_x] != '\0')
	{
		if ((96 >= str[counter_x]) || (str[counter_x] >= 123))
		{
			ret = 0;
			break ;
		}
	counter_x++;
	}
	return (ret);
}
