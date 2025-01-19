/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:46:15 by dle-fur           #+#    #+#             */
/*   Updated: 2024/08/24 12:07:24 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main()
{
	int	a;
	int	b;
	int resultat_div;
	int resultat_mod;
	int *ptr_rd = &resultat_div;
	int *ptr_rm = &resultat_mod;

	a = 10;
	b = 5;
	ft_div_mod(a, b, ptr_rd, ptr_rm);
	printf("resultat division = %d \n", *ptr_rd);
	printf("resultat modulo = %d \n", *ptr_rm);
	return (0);
}
*/
