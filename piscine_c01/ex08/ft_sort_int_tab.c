/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:57:21 by luvuceno          #+#    #+#             */
/*   Updated: 2022/11/19 13:26:01 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	counter_y;
	int	counter_x;

	temp = 0;
	counter_y = 0;
	while (counter_y < (size - 1))
	{
		counter_x = 0;
		while (counter_x < (size - 1))
		{
			if (tab[counter_x] > tab[counter_x + 1])
			{
				temp = tab[counter_x];
				tab[counter_x] = tab[counter_x + 1];
				tab[counter_x + 1] = temp;
			}
			counter_x++;
		}
		counter_y++;
	}
}
