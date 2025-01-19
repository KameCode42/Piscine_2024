/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:48:52 by dle-fur           #+#    #+#             */
/*   Updated: 2024/08/21 13:40:20 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tmp_div;
	int		tmp_rest;

	tmp_div = *a / *b;
	tmp_rest = *a % *b;
	*a = tmp_div;
	*b = tmp_rest;
}
/*
#include <stdio.h>

int	main()
{
	int	a;
	int	b;
	int *ptr_a = &a;
	int *ptr_b = &b;

	*ptr_a = 10;
	*ptr_b = 5;
	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("resultat division = %d \n", *ptr_a);
	printf("resultat modulo = %d \n", *ptr_b);
	return (0);
}
*/
