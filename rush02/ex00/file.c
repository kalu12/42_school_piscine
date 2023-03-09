/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgkoris <dgkoris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:56:57 by jopeters          #+#    #+#             */
/*   Updated: 2022/11/27 22:31:19 by dgkoris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int	get_rows(char *filename)
{
	char			c;
	unsigned int	i;
	int				rows;
	int				file;
	int				byte_read;

	file = open(filename, O_RDONLY);
	rows = 0;
	i = 0;
	while (i < 4294967295)
	{
		byte_read = read(file, &c, 1);
		if (c == '\n')
			rows++;
		if (byte_read == 0)
			break ;
		i++;
	}
	close(file);
	return (rows);
}

int	get_cols(char *filename)
{
	unsigned int	i;
	char			c;
	int				file;
	int				cols[2];
	int				byte_read;

	file = open(filename, O_RDONLY);
	cols[0] = 0;
	cols[1] = 0;
	i = 0;
	while (i < 4294967295)
	{
		byte_read = read(file, &c, 1);
		cols[0]++;
		if (c == '\n')
			cols[0] = 0;
		if (cols[0] > cols[1])
			cols[1] = cols[0];
		if (byte_read == 0)
			break ;
		i++;
	}
	close(file);
	return (cols[1]);
}

int	read_file(char *filename, char **arr)
{
	unsigned int	i;
	char			c;
	int				r_c_br_file[4];

	r_c_br_file[0] = 0;
	r_c_br_file[1] = 0;
	r_c_br_file[3] = open(filename, O_RDONLY);
	i = 0;
	while (i < 4294967295)
	{
		r_c_br_file[2] = read(r_c_br_file[3], &c, 1);
		if (c != '\n')
			arr[r_c_br_file[0]][r_c_br_file[1]] = c;
		r_c_br_file[1]++;
		if (c == '\n')
		{
			r_c_br_file[1] = 0;
			r_c_br_file[0]++;
		}
		if (r_c_br_file[2] == 0)
			break ;
		i++;
	}
	close(r_c_br_file[3]);
	return (0);
}

int	check_file(char *filename, int *rows, int *cols)
{
	int	file;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (-1);
	}
	*rows = get_rows(filename);
	if (*rows == 0)
		return (-1);
	*cols = get_cols(filename);
	return (1);
}
