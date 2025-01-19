/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:11:10 by dle-fur           #+#    #+#             */
/*   Updated: 2024/09/04 16:30:50 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	tab = (char *)malloc(sizeof(strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			tab[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			tab[k++] = sep[j++];
		}
		i++;
	}
	tab[k] = '\0';
	return (tab);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*tab[4];
	tab[0] = "mec";
	tab[1] = "t'es";
	tab[2] = "le";
	tab[3] = "meilleur";
	printf("%s\n", ft_strjoin(4, tab, "xx"));
	return (0);
}
*/
