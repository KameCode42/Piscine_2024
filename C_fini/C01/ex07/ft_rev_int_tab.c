/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:14:54 by dle-fur           #+#    #+#             */
/*   Updated: 2024/08/21 13:53:31 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
/*
#include <stdio.h>

int	main()
{
	int tab[] = {1, 2 , 3, 4, 5, 6};
	int size = 6;

	ft_rev_int_tab(tab, size);
	printf("%d %d %d %d %d %d \n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}
*/
