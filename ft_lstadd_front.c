/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:24:51 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/17 14:22:21 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    new->next = *lst;
    *lst = new;    
}
// int main()
// {
//     t_list *head;
//     t_list *current;
    

//     t_list *node = ft_lstnew("haha");
//     t_list *node1 = ft_lstnew("kaka");
//     t_list *node2 = ft_lstnew("nana");
//     if (!node || !node1)
//         return (1);

//     head = node;
//     node->next = node1;
//     node1-> next = NULL;
//     ft_lstadd_front(&head, node2);
//     node2->next = node1;
//     current = head;
//     while (current != NULL)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;

//     }

// }