/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrepl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 09:44:08 by dle-fur           #+#    #+#             */
/*   Updated: 2024/09/01 09:53:08 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrepl(char *str, char c1, char c2)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c1)
		{
			str[i] = c2;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main()
{
	char str[] = "salut";
	char c1 = 'a';
	char c2 = 'u';

	printf("%s\n", ft_strrepl(str, c1, c2));
	return (0);
}
