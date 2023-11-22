/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:02:36 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/22 15:41:20 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;
	size_t			x;

	temp_s1 = (unsigned char *)s1;
	temp_s2 = (unsigned char *)s2;
	x = 0;
	while (x < n)
	{
		if (temp_s1[x] != temp_s2[x])
			return (temp_s1[x] - temp_s2[x]);
		x++;
	}
	return (0);
}
