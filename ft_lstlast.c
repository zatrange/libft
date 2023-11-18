/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:34:23 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/18 17:37:08 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{ 
	t_list *curr;
	
    if (!lst)
        return (NULL);
    curr = lst;
    while (curr->next != NULL)
    {
        curr = curr->next; 
    }
    return (curr);
}
// int main ()
// {
//     t_list *curr;
//     t_list *node = ft_lstnew("na ");
//     t_list *node1 = ft_lstnew("nga ");
//     t_list *node2 = ft_lstnew("naj ");
//     t_list *node3 = ft_lstnew("ni");

//     node->next = node1;
//     node1->next = node2;
//     node2->next = node3;
//     curr = node;
//     t_list *last = ft_lstlast(curr);

//         printf("%s\n", (char *)last->content);
// }

