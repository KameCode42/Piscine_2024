/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:16:14 by dle-fur           #+#    #+#             */
/*   Updated: 2024/08/21 13:54:39 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;
	int		index_min;

	i = 0;
	while (i < size)
	{
		index_min = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[index_min])
			{
				index_min = j;
			}
			j++;
		}
		tmp = tab[index_min];
		tab[index_min] = tab[i];
		tab[i] = tmp;
		i++;
	}
}
/*
#include <stdio.h>

int	main()
{
	int tab[] = {2, 6, 8, 4, 1, 0};
	int size = 6;

	ft_sort_int_tab(tab, size);
	printf("%d %d %d %d %d %d \n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}
*/
