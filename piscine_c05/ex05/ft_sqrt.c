/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:59:42 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/01 23:28:56 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	if (nb <= 0)
		return (0);
	if (sqrt < 46345)
		while (sqrt * sqrt < nb)
			sqrt = sqrt + 1;
	if (sqrt * sqrt == nb)
		return (sqrt);
	else
		return (0);
}
/*
int main()
{
	printf("%d",ft_sqrt(-5));
}
*/