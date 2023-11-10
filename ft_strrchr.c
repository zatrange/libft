/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:54:24 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/05 13:45:15 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	i;
	size_t	len;

	i = (char)c;
	len = ft_strlen(str);
	while (len > 0)
	{
		if (str[len] == i)
			return ((char *)&str[len]);
		len--;
	}
	if (str[len] == i)
		return ((char *) &str[len]);
	return (0);
}
