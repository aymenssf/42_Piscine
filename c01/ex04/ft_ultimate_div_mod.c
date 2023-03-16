/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:22:32 by aassaf            #+#    #+#             */
/*   Updated: 2022/08/31 15:21:02 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;
	int	tmp1;

	tmp = *a / *b;
	tmp1 = *a % *b;
	*a = tmp;
	*b = tmp1;
}
/*int	main()
{
	int tmp;
	int tmp1;
	int a;
	int b;
	a = 20;
	b = 9;
	printf("%d\t%d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d\t%d", a, b);
}*/
