/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:37:31 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/22 18:38:28 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	lend;
	size_t	lens;
	size_t	size;
	size_t	x;
	
	lens = ft_strlen(src);
	if(!dest || n == 0)
		return (n + lens);
	lend = ft_strlen(dest);
	
	x = 0;
	
	if (lend >= n)
		return (n + lens);
	size = n - lend - 1;
	while (x < size && src[x] != '\0')
	{
		dest[lend + x] = src[x];
		x++;
	}
	dest[lend + size] = '\0';
	return(lend + lens);
}

// int main ()
// {
//   char *dest = "hhhhh";
//   const char *src = "hh";
//   printf("%zu\n", ft_strlcat(dest, src, 10));
//   printf("%lu", strlcat(dest, src, 10));
//  }
