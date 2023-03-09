/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:10:17 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/01 00:18:14 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}

/*
int main()
{
    printf("%d",ft_iterative_factorial(-5));
}
*/