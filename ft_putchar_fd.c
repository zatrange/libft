/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:15:33 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/24 13:45:34 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd > 0)
		write(fd, &c, 1);
}
// int main()
// {
// 	int file_descriptor = open("hh.txt", O_WRONLY | O_CREAT, 777);
// 	ft_putchar_fd('o', file_descriptor);
// 	printf("%d\n",  file_descriptor);
// 	int file_descripto = open("hhg.txt", O_WRONLY | O_CREAT, 777);
// 	ft_putchar_fd('g', file_descripto);
// 	printf("%d",  file_descripto);
// }
