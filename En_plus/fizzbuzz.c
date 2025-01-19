/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 08:56:10 by dle-fur           #+#    #+#             */
/*   Updated: 2024/09/09 09:19:00 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main()
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 1;
	j = 0;
	k = 0;
	l = 0;
	while (i <= 100)
	{
		if (i % 15 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else if (i >= 10)
		{
			j = i / 10 + 48;
			k = i % 10 + 48;
			write(1, &j, 1);
			write(1, &k, 1);
		}
		else
		{
			l = i + 48;
			write(1, &l, 1);
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
