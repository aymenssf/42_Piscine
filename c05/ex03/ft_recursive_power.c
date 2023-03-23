/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:06:29 by aassaf            #+#    #+#             */
/*   Updated: 2022/09/11 10:55:16 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		res *= ft_recursive_power(nb, power - 1);
	return (res);
}
/*
#include <stdio.h>
int main ()
{
	printf("%d", ft_recursive_power(4,2));
}*/
