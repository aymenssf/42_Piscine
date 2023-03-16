/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:50:35 by aassaf            #+#    #+#             */
/*   Updated: 2022/09/04 07:44:19 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
		return (1);
	while (str [i])
	{
		if ((str [i] >= 'A' && str [i] <= 'Z') || (str [i] >= 'a'\
					&& str [i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	char *str = "";
	printf("%d", ft_str_is_alpha(str));
}*/
