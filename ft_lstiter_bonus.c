/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:23:13 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/22 12:57:04 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*curr;

	if (!lst || !f)
		return ;
	curr = lst;
	while (curr != NULL)
	{
		f(curr->content);
		curr = curr->next;
	}
}

// void	ft_tuppercase(void *content)
// {
// 	int	x = 0;
// 	char	*str = (char *)content;
// 	while (str[x] >= 'a' && str[x] <= 'z')
// 	{
// 		str[x] = str[x] - 32;
// 		x++;
// 	}
// }
// int main()
// {
// 	t_list *head;
//     t_list *node1 = ft_lstnew("hhhhhh");
//     t_list *node2 = ft_lstnew("aaaaaa");
//     t_list *node3 = ft_lstnew("ffffff");
// 	head = node1;
//    ft_lstadd_back(&head, node2);
//    ft_lstadd_back(&head, node3);
// 	ft_lstiter(head, ft_tuppercase); 
// 	while (head)
// 	{
// 		printf("%s", (char *)head->content);
// 		head = head->next;
// 	}  
// }
