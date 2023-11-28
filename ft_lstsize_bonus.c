/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:41:34 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/28 14:45:37 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*curr;
	int		count;

	if (!lst)
		return (0);
	curr = lst;
	count = 0;
	while (curr != NULL)
	{
		curr = curr->next;
		count++;
	}
	return (count);
}
