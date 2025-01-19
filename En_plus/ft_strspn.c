/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:30:41 by dle-fur           #+#    #+#             */
/*   Updated: 2024/09/11 13:38:31 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t  ft_strspn(const char *s, const char *accept)
{
    size_t  i;
    size_t  j;
    size_t found;

    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        found = 0;
        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
            j++;
        }
        if (found == 0)
        {
            break;
        }
        i++;
    }
    return (i);
}

#include <stdio.h>
int main()
{
    const char str1[] = "lila";
    const char str2[] = "bonjour";


    printf("%ld", ft_strspn(str1, str2));
}
