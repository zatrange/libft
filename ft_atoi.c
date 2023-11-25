/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:12:23 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/25 20:33:08 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_check(unsigned long long nbr, int si, int leni)
{
    if (leni >= 20 && si > 0)
        return (-1);
    if (leni >= 20 && si < 0)
        return (0);
    if (nbr > LONG_MAX && si > 0)
        return (-1);
    if (nbr > LONG_MAX && si < 0)
        return (0);
    return ((int)nbr * si);
}

static int spaces(const char *str)
{
	int	y;

	y = 0;
	while (str[y] == 32 || (str[y] >= 9 && str[y] <= 13))
		y++;
	return(y);
}

int	ft_atoi(const char *str)
{
	int					x;
	int					y;
	int					sign;
	unsigned long long	result;

	x = 0;
	y = spaces(str);
	sign = 1;
	result = 0;
	if (str[y] == 45)
	{
		sign *= -1;
		y++;
	}
	else if (str[y] == 43)
		y++;
	 while (str[y] == '0')
	 	y++;
	while (str[y] >= '0' && str[y] <= '9')
	{
		result = result * 10 + (str[y] - '0');
		y++;
		x++;
	}
	return (ft_check(result, sign, x));
}