/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:35:12 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/04 18:42:31 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	i;
	int		x;

	i = (char)c;
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == i)
			return ((char *) &str[x]);
		x++;
	}
	if (str[x] == i)
		return ((char *) &str[x]); 
	return (0);
}
