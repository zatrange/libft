/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:37:48 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/23 16:42:31 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*tempd;
	const char	*temps;

	tempd = (char *)dest;
	temps = (const char *)src;
	if (!dest && !src)
		return (dest);
	if (dest > src)
	{
		while (n-- > 0)
			tempd[n] = temps[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
