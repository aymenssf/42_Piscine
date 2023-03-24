/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 22:17:57 by aassaf            #+#    #+#             */
/*   Updated: 2022/09/13 18:55:19 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc ((max - min) * sizeof(int));
	if (*range == 0)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*
#include <stdio.h>
int		main(void)
{
	int	min = 1;
	int	max = 5;
	int	*tab;
	int	size, j;
	size = ft_ultimate_range(&tab, min, max);
	printf("%d\n", size);
	j = 0;
	while(j < (max - min))
	{
		printf("%d", tab[j]);
		j++;
	}
	return (0);
}*/
