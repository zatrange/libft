/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:32:01 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/17 18:54:09 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *curr;
    if (!lst || !new)
        return (0);
    curr = lst;

    while (curr != NULL)
    {
        curr = curr->next;
    }
    curr->next = new;
}
int main()
{}
