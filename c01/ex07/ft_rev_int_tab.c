/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:20:15 by aassaf            #+#    #+#             */
/*   Updated: 2022/08/31 15:30:11 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}

/*int main()
{
	int size = 4;
	int tmp[4] = {1, 2, 3, 4};
	printf("%d, %d, %d, %d\n", tmp[0], tmp[1], tmp[2], tmp[3]);
	ft_rev_int_tab(tmp, 4);
	printf("%d, %d, %d, %d", tmp[0], tmp[1], tmp[2], tmp[3]);
}*/
