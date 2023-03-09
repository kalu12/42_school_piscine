/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopeters <jopeters@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:39:49 by jopeters          #+#    #+#             */
/*   Updated: 2022/11/27 17:22:20 by jopeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**alucard(int row, int col)
{
	int		i;
	char	**arrayrray;

	arrayrray = malloc(sizeof(char *) * row);
	i = 0;
	while (i < row)
	{
		arrayrray[i] = malloc(sizeof(char) * col);
		i++;
	}
	return (arrayrray);
}

void	freemem(char **arr, int r)
{
	int	ir;

	ir = 0;
	while (ir < r)
	{
		free(arr[ir]);
		ir++;
	}
	free(arr);
}
