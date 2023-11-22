/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:27:12 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/21 18:11:32 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
// int main()
// {
// 	t_list *head;
// 	t_list *n1 = ft_lstnew("hahah");
// 	t_list *n2 = ft_lstnew("kkaakak");
// 	t_list *n3 = ft_lstnew("jajajaj");
// 	head = n1;
// 	n1->next = n2;
// 	n2->next = n3;

// 	while (head != NULL)
// 	{
// 		printf ("%s\n", head->content);
// 		head = head->next;
// 	}
// }