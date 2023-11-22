/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:13:47 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/22 13:50:34 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*join_str;
	size_t	x;

	x = 0;
	if (!s1 || !s2)
		return (0);
	join_str = (char *) malloc((ft_strlen(s1) 
				+ ft_strlen(s2) + 1) * sizeof(char));
	if (!join_str)
		return (0);
	while (s1[x] != '\0' && x < ft_strlen(s1))
	{
		join_str[x] = s1[x];
		x++;
	}
	x = 0;
	while (s2[x] != '\0' && x < ft_strlen(s2))
	{
		join_str[ft_strlen(s1) + x] = s2[x];
		x++;
	}
	join_str[x + ft_strlen(s1)] = '\0';
	return (join_str);
}