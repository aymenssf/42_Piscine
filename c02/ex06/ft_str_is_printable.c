/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:13:55 by aassaf            #+#    #+#             */
/*   Updated: 2022/09/05 11:19:30 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
		return (1);
	while (str [i])
	{
		if (!(str [i] >= 32 && str [i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char *str = "\27";
	printf("%d", ft_str_is_printable(str));
}*/
