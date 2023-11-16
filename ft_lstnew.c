/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:57:41 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/16 18:35:09 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *node;

    node = (t_list *) malloc(sizeof(t_list));
    if (!node)
        return (0);
    node->content = content;
    node->next = NULL;
    return (node);
}
// int main()
// {
//     // char str = 'h';
//     // char str1 = 'h';
//     // char str2 = 'h';
//     t_list *node = ft_lstnew("5 5 5");
//     t_list *node1 = ft_lstnew("5 5 5");
//     t_list *node2 = ft_lstnew("5 5 5");
    

//     node -> next = node1;
//     node1 -> next = node2;

//     t_list *current = node;
//     while (current != NULL)
//     {
//         printf("%s\n", (current -> content));
//         current = current -> next;
//     } 
// }
