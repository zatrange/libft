/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:25:52 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/23 16:01:30 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	chr;
	unsigned char	*temp_str;
	size_t			x;

	x = 0;
	temp_str = (unsigned char *)str;
	chr = (unsigned char)c;
	while (x < n)
	{
		if (temp_str[x] == chr)
			return ((void *) &temp_str[x]);
		x++;
	}
	return (0);
}
