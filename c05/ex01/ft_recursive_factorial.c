/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:04:28 by aassaf            #+#    #+#             */
/*   Updated: 2022/09/10 15:33:58 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		fact *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	return (fact);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_factorial(0));
}*/
