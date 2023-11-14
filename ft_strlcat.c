/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:37:31 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/09 11:13:14 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	lend; 
	size_t	lens;
	size_t	x;
	size_t	size;

	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	x = 0;
	size = n - lend - 1 ;
	if (lend >= n)
		return (n + lens);
	while (src[x] != '\0' && size > 0)
	{
		dest[lend + x] = src[x];
		x++;
		size--;
	}
	dest[lend + x] = '\0';
	return (lend + lens);
}
