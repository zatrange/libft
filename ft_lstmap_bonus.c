/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:37:04 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/24 18:27:47 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;

	if (!lst || !f || !del)
		return (0);
	head = NULL;
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}

// static void ft_upp(void *content)
// {
// 	char *str = content;
// 	int x = 0;
// 	while(str[x] != '\0' )
// 	{
// 		if(str[x] >= 'a' && str[x] <= 'b')
// 		{
// 			str[x] -= 32;
// 		}
// 		x++;
// 	}
// }
// static void ft_del(void *content)
// {
// 	free(content);
// }
// int main()
// {
// 	t_list *head = NULL;
// 	t_list *n1 = ft_lstnew(ft_strdup("aaaa"));
// 	t_list *n2 = ft_lstnew(ft_strdup("bbbb"));
// 	t_list *n3 = ft_lstnew(ft_strdup("hhhh"));

// 	ft_lstadd_back(&head, n1);
// 	ft_lstadd_back(&head, n2);
// 	ft_lstadd_back(&head, n3);

// 	ft_lstmap(head, ft_upp, ft_del);
// 	while (head != NULL)
// 	{
// 		printf("%s \n", head->content);
// 		head = head->next;
// 	}
// }