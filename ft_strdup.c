/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:29:41 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/05 13:48:58 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;
	size_t	x;

	len = ft_strlen(s1);
	dup = (char *)malloc((len + 1) * sizeof(char));
	x = 0;
	if (!dup)
		return (0);
	while (len > x)
	{
		dup[x] = s1[x];
		x++;
	}
	dup[x] = '\0';
	return (dup);
}
