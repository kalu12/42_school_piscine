/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navu <navu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:41:39 by kkaimov           #+#    #+#             */
/*   Updated: 2022/11/20 23:19:46 by navu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/* creating an 2D array of integers */
int	**init(int rows, int cols)
{
	int	**tmp_arr;
	int	i;

	tmp_arr = (int **)malloc(rows * sizeof(int *));
	if (!tmp_arr)
		return (0);
	i = 0;
	while (i < rows)
	{
		tmp_arr[i] = (int *)malloc(cols * sizeof(int));
		if (tmp_arr[i] == NULL)
			return (0);
		i++;
	}
	return (tmp_arr);
}

/* creating a 96-length string(template) from a 2 strings(bc of norminette) */
char	*create_str_template(char *str1, char *str2)
{
	int		i;
	int		j;
	int		k;
	char	*tmp_str;

	i = 0;
	j = 0;
	k = 0;
	tmp_str = (char *)malloc(96 * sizeof(char));
	if (tmp_str == NULL)
		return (0);
	while (i + k <= 96)
	{
		if (i < 96 / 2)
			tmp_str[j++] = str1[i++] - '0';
		else
			tmp_str[j++] = str2[k++] - '0';
	}
	return (tmp_str);
}

/* filling 2D (template)array with integers from a (template)string */
void	parse(int **map, int rows, int cols, char *str_template)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			map[i][j] = str_template[len++];
			j++;
		}
		i++;
	}
}

/* combining all previous functions to create
an 24x4 2D array with all possible rows */
int	**create_template(void)
{
	int		**template;
	char	*str;

	template = init(24, 4);
	str = create_str_template(
			"123412431324134214231432213421432314234124132431",
			"312431423214324134123421412341324213423143124321");
	parse(template, 24, 4, str);
	return (template);
}

/* creating an 1D integer array from a input string */
int	*trim(char *str)
{
	int	i;
	int	j;
	int	len;
	int	*tmp_arr;

	tmp_arr = (int *)malloc(16 * sizeof(int));
	if (tmp_arr == NULL)
		return (0);
	i = 0;
	j = 0;
	len = 32;
	while (i < len)
	{
		if (str[i] >= '1' && str[i] <= '4')
			tmp_arr[j++] = str[i] - '0';
		i++;
	}
	return (tmp_arr);
}
