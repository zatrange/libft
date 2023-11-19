/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:23:13 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/19 18:35:29 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *curr;

	if(!lst || !f)
		return ;
	curr = lst;
	while (curr!= NULL)
	{
		f(curr->content);
		curr = curr->next;
	}
}