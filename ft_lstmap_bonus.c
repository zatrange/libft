/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:37:04 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/25 15:43:40 by zgtaib           ###   ########.fr       */
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
// 	char *str = (char *)content;
// 	int x = 0;
// 	while (str[x] != '\0')
// 	{
// 		if (str[x] >= 'a' && str[x] <= 'z')
// 			str[x] -= 32;
// 		x++;
// 	}
// }
// static void ft_del(void *content)
// {
// 	free (content);
// }
// int main()
// {
// 	t_list *head;
// 	t_list *cuur;
// 	t_list *n1 = ft_lstnew(ft_strdup("hey "));
// 	t_list *n2 = ft_lstnew(ft_strdup("sup "));
// 	t_list *n3 = ft_lstnew(ft_strdup("u know why god made ak47 ..."));
// 	t_list *n4 = ft_lstnew(ft_strdup("to kill dinasors and "));
// 	t_list *n5 = ft_lstnew(ft_strdup("homosexuals"));
// 	head = n1;
// 	ft_lstadd_back(&head, n2);
// 	ft_lstadd_back(&head, n3);
// 	ft_lstadd_back(&head, n4);
// 	ft_lstadd_back(&head, n5);

// 	void *ptr = &ft_upp;
// 	ft_lstmap(head, ptr, ft_del);
// 	while (head != NULL)
// 	{
// 		printf ("%s\n", head->content);
// 		head = head->next;
// 	}

// }