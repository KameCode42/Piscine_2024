/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:08:32 by dle-fur           #+#    #+#             */
/*   Updated: 2024/09/08 14:20:51 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == 32 || argv[1][i] == 9)
		{
			i++;
		}
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 32 || argv[1][i] == 9)
			{
				if (argv[1][i + 1] != 32 && argv[1][i] != 9 && argv[1][i] != '\0')
				{
					 write(1, "   ", 3);
				}
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
