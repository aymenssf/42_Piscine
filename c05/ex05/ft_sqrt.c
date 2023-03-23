/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:35:43 by aassaf            #+#    #+#             */
/*   Updated: 2022/09/10 21:11:49 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	tmp;

	tmp = nb;
	if (tmp <= 0)
		return (0);
	if (tmp == 1)
		return (1);
	i = 2;
	if (tmp == 2147483647)
		return (46341);
	if (tmp >= 2)
	{
		while (i * i <= tmp && (i < 46341))
		{
			if (i * i == tmp)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_sqrt(121));
}*/
