/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:26:52 by dle-fur           #+#    #+#             */
/*   Updated: 2024/09/09 09:27:04 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j])
			{
				i++;
			}
			j++;
		}
		if (argv[1][i] == '\0')
		{
			write(1, "1", 1);
		}
		else
		{
			write(1, "0", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
