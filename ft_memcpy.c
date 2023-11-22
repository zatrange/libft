/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:25:00 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/22 14:14:19 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*tempd;
	const char	*temps;
	size_t		x;

	tempd = (char *)dest;
	temps = (const char *)src;
	x = 0;
	if (!dest && !src)
		return (0);
	while (x < n)
	{
		tempd[x] = temps[x];
		x++;
	}
	return (dest);
}
