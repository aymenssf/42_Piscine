/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:03:30 by aassaf            #+#    #+#             */
/*   Updated: 2022/09/10 12:10:34 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	while (nb)
	{
		fact *= nb--;
	}
	return (fact);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(5));
}*/
