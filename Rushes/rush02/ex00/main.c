/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgkoris <dgkoris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:37:04 by dgkoris           #+#    #+#             */
/*   Updated: 2022/11/27 22:47:09 by dgkoris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int				get_rows(char *filename);
int				get_cols(char *filename);
int				read_file(char *filename, char **arr);
void			ft_print(int nb, int max_rows, char **c);
int				ft_power(int nb, int power);
int				check_file(char *filename, int *rows, int *cols);
char			**alucard(int row, int col);
void			freemem(char **arr, int r);
unsigned int	check_numb(char *str);
void			atoi_array(char	*str, int rc, char **array);

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

void	check_zero(char *c, char *argv[])
{
	if (check_numb(c) == 0)
	{
		write(1, "Error\n", 6);
		exit (0);
	}
	if ((argv[1][0] == '0') && ((argv[1][1] < '0') || (argv[1][1] > '9' )))
	{
		write(1, "zero\n", 5);
		exit (0);
	}
}

void	check_zero_two(char *c, char *argv[])
{
	if (check_numb(c) == 0)
	{
		write(1, "Error\n", 6);
		exit (0);
	}
	if ((argv[2][0] == '0') && ((argv[2][1] < '0') || (argv[2][1] > '9' )))
	{
		write(1, "zero\n", 5);
		exit (0);
	}
}

int	main(int argc, char *argv[])
{
	char	filename[50];
	char	**array;
	int		rc[2];

	if (argc == 2)
	{
		ft_strcpy(filename, "numbers.dict");
		check_zero(argv[1], argv);
	}
	if (argc == 3)
	{
		ft_strcpy(filename, argv[1]);
		check_zero_two(argv[2], argv);
	}
	if (check_file(filename, &rc[0], &rc[1]) == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	array = alucard(rc[0] + 1, rc[1] + 2);
	read_file(filename, array);
	if (argc == 2 || argc == 3)
		atoi_array(argv[argc - 1], rc[0], array);
	freemem(array, rc[0] + 1);
	return (0);
}
