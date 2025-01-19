/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strpbrk.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:25:42 by dle-fur           #+#    #+#             */
/*   Updated: 2024/09/11 14:58:34 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;

    if (s1 == NULL || s2 == NULL)
    {
        return (0);
    }
    while(*s1)
    {
        i = 0;
        while(s2[i])
        {
            if(*s1 == s2[i])
                return (char *) s1;
            i++;
        }
        s1++;
    }
    return (NULL);
}


#include <stdio.h>
int main()
{
    char str1[] = "salut";
    char str2[] = "rigureux";

    printf("%s\n", ft_strpbrk(str1, str2));
    return (0);
}
