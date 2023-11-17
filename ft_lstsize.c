/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:41:34 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/17 14:04:16 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list  *curr;
    int     count;

    if (!lst)
        return (0);
    count = 0;
    curr = lst;
    while (curr != NULL)
    {
        curr = curr->next;
        count++;
    }
    return (count);
}
// int main()
// {
//     t_list *curr;

//     t_list *node = ft_lstnew("damn ");
//     t_list *node1 = ft_lstnew("son ");
//     t_list *node2 = ft_lstnew("u ");
//     t_list *node3 = ft_lstnew("suck");

//     node->next = node1;
//     node1->next = node2;
//     node2->next = node3;
//     curr = node;

//     printf("%d\n", ft_lstsize(curr));
//     while (curr != NULL)
//     {
//         printf("%s\n", (char *)curr->content);
//         curr = curr->next;
//     }
// }
