/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:21:19 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/14 11:31:53 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	size_t	x;
	char	*str;

	x = 0;
	if (start >= ft_strlen(s) || n == 0 || !s)
	{
		str = malloc(sizeof(char));
		if (!str)
			return (0);
		str[0] = '\0';
		return (str);
	}
	if (n > ft_strlen(s + start))
		n = ft_strlen(s + start);
	str = (char *)malloc((n + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[start] != '\0' && x < n)
	{
		str[x] = s[start];
		x++;
		start++;
	}
	str[x] = '\0';
	return (str);
}
