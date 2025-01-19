/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:43:21 by dle-fur           #+#    #+#             */
/*   Updated: 2024/08/21 13:49:09 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>

int	main()
{
	int	a;
	int	b;
	int *ptr_a = &a;
	int *ptr_b = &b;

	*ptr_a = 5;
	*ptr_b = 10;
	printf("%d, %d \n", *ptr_a, *ptr_b);
	ft_swap(ptr_a, ptr_b);
	printf("%d, %d \n", *ptr_a, *ptr_b);
	return (0);
}
*/
