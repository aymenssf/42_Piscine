/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:21:47 by aassaf            #+#    #+#             */
/*   Updated: 2022/09/13 16:49:12 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		l;

	if (size == 0)
	{
		s = malloc (sizeof(char));
		*s = '\0';
		return (s);
	}
	l = ft_strlen(sep);
	s = (char *)malloc((sizeof(strs) + l) * (size - 1));
	*s = '\0';
	i = 0;
	while (i < size)
	{
		s = ft_strcat(s, strs[i]);
		if (i != size - 1)
			s = ft_strcat(s, sep);
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int main()
{
	char *tab[] = {"aymen", "assaf", "zerosept"};
	char s[] = "$\t";
	printf("%s", ft_strjoin(3, tab, s));
}*/
