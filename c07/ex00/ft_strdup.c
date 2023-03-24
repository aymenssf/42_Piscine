/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:34:23 by aassaf            #+#    #+#             */
/*   Updated: 2022/09/12 21:28:45 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new;
	char	*d;

	i = 0;
	d = ((new = malloc (sizeof (char) * len(src) + 1)));
	if (!d)
		return (NULL);
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include<stdio.h>
int main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s\n", ft_strdup(av[1]));
	//	printf("%s", strdup(av[1]));
	}
}*/
