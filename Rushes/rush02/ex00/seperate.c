/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seperate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgkoris <dgkoris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:50:03 by coder             #+#    #+#             */
/*   Updated: 2022/11/27 22:55:12 by dgkoris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_print(int a, int max_rows, char **c);
void	single_nb(int *h, unsigned int *a, char **array);

unsigned int	ft_strlen(char	*str)
{
	int	h[0];

	h[0] = 0;
	while (str[h[0]] != '\0')
	{
		h[0]++;
	}
	return (h[0]);
}

void	atoi_array(char	*str, int rc, char **array)
{
	int				i;
	int				h[2];
	unsigned int	*a;
	int				d;

	h[0] = ft_strlen(str);
	h[1] = rc;
	i = 0;
	d = 0;
	a = (unsigned int *) malloc(h[0] * sizeof(unsigned int));
	while (str[i] != '\0')
	{
		a[i] = str[i] - '0';
		i++;
	}
	single_nb(h, a, array);
	free(a);
	write(1, "\n", 1);
}

unsigned int	check_numb(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] == '+')
			str[i] = '0';
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

//h[0] == size
//h[1] == rc