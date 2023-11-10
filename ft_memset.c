/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:58:22 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/09 11:11:19 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*temp;
	size_t			x;

	x = 0;
	temp = (unsigned char *) b;
	while (x < n) 
	{
		temp[x] = (unsigned char)c;
		x++;
	}
	return (b);
}
