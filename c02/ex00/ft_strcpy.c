/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:10:02 by aassaf            #+#    #+#             */
/*   Updated: 2022/09/04 07:43:14 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest [i] = src [i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}

/*int main ()
{
	char src [] = "LEET";
	char dest [] = "";
	printf(":%s:\n", ft_strcpy(dest, src));
	return (0);
}*/
