/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navu <navu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:18:31 by kkaimov           #+#    #+#             */
/*   Updated: 2022/11/20 23:23:38 by navu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* declaring all functions that we will use */

#ifndef RUSH_H

# define RUSH_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		**init(int rows, int cols);
char	*create_str_template(char *str1, char *str2);
void	parse(int **map, int rows, int cols, char *str_template);
int		*trim(char *str);
void	print(int **map, int rows, int cols);

int		n_box(int a, int b, int c, int d);
int		ft_check_unique(int **map);
int		ft_check(int **map, int *set);
int		check_cols(int **map, int *set);
int		check_rows(int **map, int *set);

void	broodforce(int **map, int *set, int **template);
int		fill_map(int **map, int *set, int **template, int *i);

void	ft_putchar(char c);
int		**create_template(void);
int		input_check(char *str);
void	free_map(int **arr, int i);
void	free_template(int **arr, int size, int *i);

#endif