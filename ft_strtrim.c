/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:49:46 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/23 18:07:35 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		trimedlen;
	char	*trimedstr;
	int		x;

	if (!s1 || !set)
		return (0);
	start = 0;
	x = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != 0)
		start++;
	while (end > start && ft_strchr(set, s1[end]) != 0)
		end--;
	trimedlen = end - start + 1;
	trimedstr = (char *)malloc((trimedlen + 1) * sizeof(char));
	if (!trimedstr)
		return (0);
	while (x < trimedlen)
		trimedstr[x++] = s1[start++];
	trimedstr[x] = '\0';
	return (trimedstr);
}
