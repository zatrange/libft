/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:12:23 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/03 20:39:51 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	x;
	int	sign;
	int	result;

	x = 0;
	sign = 1;
	result = 0;
	while (str[x] == 32 || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == 45)
	{
		sign *= -1;
		x++;
	}
	else if (str[x] == 43)
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = result * 10 + (str[x] - '0');
		x++;
	}
	return (result * sign);
}