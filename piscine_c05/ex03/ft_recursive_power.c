/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:56:17 by luvuceno          #+#    #+#             */
/*   Updated: 2022/12/01 00:17:59 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	ans;

	i = 1;
	ans = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	while (i <= power)
	{
		ans = nb * ft_recursive_power(nb, power - 1);
		i++;
	}
	return (ans);
}
/*
int main()
{
    return (printf("%d",ft_recursive_power(-3,3)));
    
}
*/
