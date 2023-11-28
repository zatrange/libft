/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:12:23 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/28 09:55:12 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(unsigned long long result, int sign, int lenx)
{
	if (lenx >= 20 && sign > 0)
		return (-1);
	if (lenx >= 20 && sign < 0)
		return (0);
	if (result > LONG_MAX && sign > 0)
		return (-1);
	if (result > LONG_MAX && sign < 0)
		return (0);
	return ((int)result * sign);
}

static int	spaces(const char *str)
{
	int	y;

	y = 0;
	while (str[y] == 32 || (str[y] >= 9 && str[y] <= 13))
		y++;
	return (y);
}

static void	zeros(const char *str, int *y)
{
	while (str[(*y)] == '0')
		(*y)++;
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
	zeros(str, &y);
	while (str[y] >= '0' && str[y] <= '9')
	{
		result = result * 10 + (str[y] - '0');
		y++;
		x++;
	}
	return (ft_check(result, sign, x));
}
