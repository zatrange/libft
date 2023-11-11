/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:21:19 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/11 19:09:13 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t n)
{
    size_t x;
    char * str;

    x = 0; 
    str = (char *)malloc((n + 1) * sizeof(char));
    if (!str)
        return (0);
    if (start > ft_strlen(s) || n == 0)
    {
        str[0] = 0;
        return (str);
    }
    while (s[start] != '\0' && x < n)
    {
        str[x] = s[start];
        x++;
        start++;
    }
    str[x] = '\0';
    return (str);
}
/*int main()
{
    char str[] = "o bay bay salam?";
    printf("%s", ft_substr(str, 4, 12));
}*/

