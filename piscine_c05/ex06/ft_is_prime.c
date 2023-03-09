/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprimce.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:41:39 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/01 00:41:43 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	check;

	i = 2;
	check = 0;
	while (i < nb)
	{
		if ((nb % i) == 0)
			check = 1;
	i++;
	}
	if (nb <= 1)
		return (0);
	else if (check == 0)
		return (1);
	else
		return (0);
}
/*
int main()
{
    printf("%d",ft_is_prime(4));
}
*/
