/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:33:21 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/06 14:11:25 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (needle[y] == '\0')
		return ((char *)haystack);
	while (haystack[x] != '\0' && x < n)
	{
		y = 0;
		while (haystack[x + y] == needle[y] && 
			x + y < n && haystack[x + y] != '\0')
			y++;
		if (needle[y] == '\0')
			return ((char *)haystack + x);
		x++;
	}
	return (0);
}
