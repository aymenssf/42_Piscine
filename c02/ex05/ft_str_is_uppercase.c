/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:10:43 by aassaf            #+#    #+#             */
/*   Updated: 2022/09/04 07:46:47 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
		return (1);
	while (str [i])
	{
		if (str [i] >= 'A' && str [i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	char *str = "AAA";
	printf("%d", ft_str_is_uppercase (str));
}*/
