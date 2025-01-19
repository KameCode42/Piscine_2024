/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:06:03 by dle-fur           #+#    #+#             */
/*   Updated: 2024/09/10 12:08:50 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	min(int *tab, int size)
{
	int	i;
	int result;

	i = 0;
	if (size == 0)
	{
		return (0);
	}
	result = tab[i];
	while (i < size)
	{
		if (result > tab[i])
		{
			result = tab[i];
		}
	}
	return (result);
}
