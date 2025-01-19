/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:47:56 by dle-fur           #+#    #+#             */
/*   Updated: 2024/09/07 14:00:05 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int				result;

	i = 0;
	if (len == 0)
	{
		return (0);
	}
	result = tab[i];
	while (i < len)
	{
		if (result < tab[i])
		{
			result = tab[i]
		}
		i++;
	}
	return (result);
}
