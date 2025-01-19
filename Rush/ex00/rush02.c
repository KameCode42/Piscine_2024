/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumattei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:26:59 by lumattei          #+#    #+#             */
/*   Updated: 2024/08/25 12:35:20 by lumattei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(int x, char start, char middle, char last)
{
	int	i;

	i = 2;
	ft_putchar(start);
	while (i <= x - 1)
	{
		ft_putchar(middle);
		i++;
	}
	if (x != 1)
		ft_putchar(last);
}

void	rush(int x, int y)
{
	int	j;

	j = 2;
	if (x <= 0 || y <= 0 || x > 2147483647 || y > 2147483647)
	{
		write(1, "valeur pas autorise\n", 20);
		return ;
	}
	ft_print_line(x, 'A', 'B', 'A');
	while (j <= y - 1)
	{
		ft_putchar('\n');
		ft_print_line(x, 'B', ' ', 'B');
		j++;
	}
	if (y != 1)
	{
		ft_putchar('\n');
		ft_print_line(x, 'C', 'B', 'C');
	}
	ft_putchar('\n');
}
