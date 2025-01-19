/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prog_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:53:15 by dle-fur           #+#    #+#             */
/*   Updated: 2024/09/10 11:41:38 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int count;
	int word;

	i = 1;
	count = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] != 32 && argv[i][j] != 9)
				{
					count += 1;
					while (argv[i][j] != '\0' && argv[i][j] != 32 && argv[i][j] != 9)
					{
						j++;
					}
				}
				else
				{
					j++;
				}
			}
			i++;
		
	}
	return (0);
}
