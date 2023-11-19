/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:24:51 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/19 16:23:33 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
	if(new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else{
    new->next = *lst;
    *lst = new;
	}    
}
// int main()
// {
// 	t_list *head;

// 	t_list *n1 = ft_lstnew("ana");
// 	t_list *n2 = ft_lstnew("hoo");
// 	t_list *n3 = ft_lstnew("boo");
// 	t_list *n4 = ft_lstnew("kooo");

// 	head = n1;
// 	n1->next = n2;
// 	n2->next = n3;
// 	n3->next = NULL;
// 	ft_lstadd_front(&head, n4);
// 	while (head != NULL)
// 	{
// 		printf("%s\n", head->content);
// 		head = head->next;
// 	}
// }