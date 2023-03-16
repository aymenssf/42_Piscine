/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:08:55 by aassaf            #+#    #+#             */
/*   Updated: 2022/08/31 16:53:16 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab [i] > tab [j])
			{
				tmp = tab [i];
				tab [i] = tab [j];
				tab [j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*int main()
{
	int size = 4;
	int tmp[4] = {5, 7, 4, 1};
	printf("%d, %d, %d, %d\n", tmp[0], tmp[1], tmp[2], tmp[3]);
	ft_sort_int_tab(tmp, size);
	printf("%d, %d, %d, %d", tmp[0], tmp[1], tmp[2], tmp[3]);
}*/
