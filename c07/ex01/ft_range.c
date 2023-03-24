/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:31:01 by aassaf            #+#    #+#             */
/*   Updated: 2022/09/13 15:49:30 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*d;

	if (min >= max)
		return (NULL);
	d = malloc((max - min) * sizeof(int));
	if (!d)
		return (0);
	i = 0;
	while (min < max)
	{
		d[i] = min;
		i++;
		min++;
	}
	return (d);
}
/*
#include <stdio.h>
int        main(void)
{
    int    min = 5;
    int    max = 10;
    int    *tab;
    int    i = 0;
    tab = ft_range(min, max);
    while(i < max - min)
    {
        printf("%d\n", tab[i]);
        i++;
    }
i}*/
