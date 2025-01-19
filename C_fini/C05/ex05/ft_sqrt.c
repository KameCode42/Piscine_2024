/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:37:42 by dle-fur           #+#    #+#             */
/*   Updated: 2024/08/29 14:50:26 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (sqrt * sqrt < nb)
	{
		sqrt++;
	}
	if (sqrt * sqrt == nb)
	{
		return (sqrt);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(10));
	return (0);
}
*/
