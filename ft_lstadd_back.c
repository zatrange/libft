/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:32:01 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/18 17:55:46 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;
	
	if(new == NULL)
		return ;
	if(*lst == NULL)
		*lst = new;
	else
	{
    curr = ft_lstlast(*lst);
    curr->next = new;
	}
}
// int main()
// {
// 	t_list *head;
// 	head = NULL;

// 	t_list *n1 = ft_lstnew("ana");
// 	t_list *n2 = ft_lstnew("hoo");
// 	t_list *n3 = ft_lstnew("boo");
// 	t_list *n4 = ft_lstnew("kooo");

// 	head = n1;
// 	n1->next = n2;
// 	n2->next = n3;
// 	n3->next = NULL;
// 	ft_lstadd_back(&head, n4);
// 	while (head != NULL)
// 	{
// 		printf("%s\n", head->content);
// 		head = head->next;
// 	}
// }