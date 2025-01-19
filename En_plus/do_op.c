/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:12:20 by dle-fur           #+#    #+#             */
/*   Updated: 2024/09/07 16:00:34 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
		{
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		}
		else if (argv[2][0] == '-')
		{
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		}
		else if (argv[2][0] == '*')
		{
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		}
		else if (argv[2][0] == '/')
		{
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
		}
		else if (argv[2][0] == '%')
		{
			printf("%d", atoi(argv[1]) % atoi(argv[3]));
		}
	}
	printf("\n");
	return (0);
}
