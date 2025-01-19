/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:48:36 by dle-fur           #+#    #+#             */
/*   Updated: 2024/09/02 17:18:16 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789ABCDEF"[str[i] / 16]);
			ft_putchar("0123456789ABCDEF"[str[i] % 16]);
		}
		i++;
	}
}

#include <stdio.h>
int	main()
{
	char str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
	return (0);
}
