/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:13:47 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/06 20:02:25 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*join_str;
	size_t	x;

	x = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!join_str)
		return (0);
	while (s1[x] != '\0' && x < len1)
	{
		join_str[x] = s1[x];
		x++;
	}
	x = 0;
	while (s2[x] != '\0' && x < len2)
	{
		join_str[len1 + x] = s2[x];
		x++;
	}
	join_str[x + len1] = '\0';
	return (join_str);
}
