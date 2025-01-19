/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 09:53:17 by dle-fur           #+#    #+#             */
/*   Updated: 2024/09/01 10:06:13 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strcspn(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (i);
}

#include <stdio.h>
int	main()
{
	const char str1[] = "salut";
	const char str2[] = "rigureux";

	printf("%ld\n", ft_strcspn(str1, str2));
	return (0);
}
