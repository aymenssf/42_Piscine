/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 22:07:16 by aassaf            #+#    #+#             */
/*   Updated: 2022/09/05 13:23:05 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest [i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char src [] = "DONT PANIC";
	char dest [5] = "";
	unsigned int n = 3;
	printf("%s", ft_strncpy(dest, src, n));
}*/
