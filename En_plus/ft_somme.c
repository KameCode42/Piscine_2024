/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_somme.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:50:16 by dle-fur           #+#    #+#             */
/*   Updated: 2024/09/10 12:05:53 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_somme(int *tab, int size)
{
	int i;
	int result;

	i = 0;
	result = 0;
	if (size == 0)
	{
		return (0);
	}
	while (i < size)
	{
		result = result + tab[i];
		i++;
	}
	return (result);
}

#include <stdio.h>
int main()
{
	int tab[] = {2, 3, 4, 5, 6, 6};
	int size = 6;

	printf("somme = %d", ft_somme(tab, size));
	return (0);
}
