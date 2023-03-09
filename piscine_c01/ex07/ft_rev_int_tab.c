/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:57:21 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/19 13:59:41 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter_x;
	int	counter_y;
	int	t;

	t = 0;
	counter_x = 0;
	counter_y = size - 1 ;
	while (counter_x < size / 2)
	{
		t = tab[counter_x];
		tab[counter_x] = tab[counter_y];
		tab[counter_y] = t;
		counter_x++;
		counter_y--;
	}
}
