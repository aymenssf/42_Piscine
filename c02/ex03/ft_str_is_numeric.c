/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:35:55 by aassaf            #+#    #+#             */
/*   Updated: 2022/09/04 07:44:35 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
		return (1);
	while (str [i])
	{
		if (str [i] >= '0' && str [i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
	char *str = "23";
	printf("%d", ft_str_is_numeric(str));
}*/
