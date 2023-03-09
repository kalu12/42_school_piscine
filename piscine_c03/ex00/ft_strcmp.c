/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:48:05 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/26 23:54:34 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (s1[i] != '\0' || s2 [i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			check = 0;
			break ;
		}
	i++;
	}
	if (check == 0)
		return (s1[i] - s2[i]);
	else
		return (0);
}
