/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:58:22 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/22 14:19:55 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*temp;
	size_t			x;

	x = 0;
	temp = (unsigned char *) b;
	while (x < n) 
	{
		temp[x] = (unsigned char)c;
		x++;
	}
	return (b);
}
// int main()
// {
// 	int x = 0;
// 	int b[] = {258, 22, 2};
// 	ft_memset((void *)&b[1], 10, 1);
// 	ft_memset((void *)&b[1] + 1, 0, 1);
// 	ft_memset((void *)&b[1] + 2, 0, 1);
// 	ft_memset((void *)&b[1] + 3, 0, 1);
// 	ft_memset((void *)&b[2], 42, 1);
// 	ft_memset((void *)&b[2] + 1, 0, 1);
// 	ft_memset((void *)&b[2] + 2, 0, 1);
// 	ft_memset((void *)&b[2] + 3, 0, 1);
// 	while (x < sizeof(b) / sizeof(b[0]))
// 	{
// 		printf("%d ", b[x]);
// 		x++;
// 	}
// }