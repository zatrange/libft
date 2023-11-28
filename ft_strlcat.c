/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:37:31 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/28 14:49:38 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	lend;
	size_t	lens;

	if (!dest && n == 0)
		return (ft_strlen(src));
	lens = ft_strlen(src);
	lend = ft_strlen(dest);
	if (lend >= n)
		return (n + lens);
	if (lens < n - lend - 1)
	{
		ft_memcpy(dest + lend, src, lens + 1);
	}
	else
	{
		ft_memcpy(dest + lend, src, n - lend - 1);
		dest[n - 1] = '\0';
	}
	return (lend + lens);
}
