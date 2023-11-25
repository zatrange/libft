/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:07:04 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/25 15:55:30 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;
	size_t			len;

	i = 0;
	len = count * size;
	temp = (unsigned char *)malloc(len);
	if (!temp)
	{
		return (0);
	}
	while (len > i)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
