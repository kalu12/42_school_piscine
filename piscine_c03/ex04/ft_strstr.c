/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:45:30 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/30 03:36:04 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*pas(int j, char *str, int i, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	j = 0;
	check = 0;
	while (str[i] != '\0')
	{
		while (to_find[j] != '\0')
		{
			if (!(str[i + j] == to_find[j]))
				check = 1;
		j++;
		}
		if (check == 0)
		{
			pas(j, str, i, to_find);
			return (to_find);
		}
		check = 0;
	i++;
	j = 0;
	}
	return (NULL);
}

char	*pas(int j, char *str, int i, char *to_find)
{
	j = 0;
	while (str[i] != '\0')
	{
		to_find[j] = str[i];
		i++;
		j++;
	}
	to_find[j] = '\0';
	return (to_find);
}
