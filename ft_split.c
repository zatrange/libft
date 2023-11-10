/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:07:47 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/10 17:19:12 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int isword(char *str, char c)
{
    int x;
    int count ;

    x = 0;
    count = 0;
    while (str[x] != '\0')
    {
        while (str[x] != '\0' && str[x] == c)
            x++;
        if (str[x] != '\0')
            count++;
        while (str[x] != '\0' && str[x] != c) 
            x++;
    }
    return (count);
}


char    **ft_split(char const *s, char c);
{
    char ** string;
    
    
}