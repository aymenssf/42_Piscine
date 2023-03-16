/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:11:57 by aassaf            #+#    #+#             */
/*   Updated: 2022/08/31 15:19:07 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = 0;
	*mod = 0;
	*div = a / b;
	*mod = a % b;
}
/*int	main()
{
	int a;
	int b;
	int div;
	int mod;
	a = 20;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\t%d", div, mod);
}*/
