/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:52:02 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/15 17:30:02 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	x;

	x = 0;
	if (!s || fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}