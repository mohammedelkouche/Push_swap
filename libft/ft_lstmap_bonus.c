/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:43:05 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/03/10 15:26:45 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst,  int (*f)(int), void (*del)(int))
{
	t_list	*node;
	t_list	*newlst;

	if (!lst || !f || !del)
		return (0);
	node = ft_lstnew(0);
	if (!node)
		return (0);
	node->content = f(lst->content);
	newlst = node;
	lst = lst->next;
	while (lst)
	{
		node->next = ft_lstnew(0);
		if (!node->next)
		{
			ft_lstclear(&newlst, del);
			return (0);
		}
		node->next->content = f(lst->content);
		node = node->next;
		lst = lst->next;
	}
	node->next = NULL;
	return (newlst);
}
