/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:04:12 by dle-fur           #+#    #+#             */
/*   Updated: 2024/09/10 16:46:32 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int repeat;

	i = 0;
	if (argc > 1)
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
				if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				{
					repeat = argv[1][i] - 'a';
				}
				else
				{
					repeat = argv[1][i] - 'A';
				}
				while (repeat > 0)
				{
					write(1, &argv[1][i], 1);
					repeat--;
				}
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
