/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:01:08 by aassaf            #+#    #+#             */
/*   Updated: 2022/09/04 07:45:43 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
		return (1);
	while (str [i])
	{
		if (str [i] >= 'a' && str [i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	char *str = "aaaa_";
	printf("%d", ft_str_is_lowercase (str));
}*/
