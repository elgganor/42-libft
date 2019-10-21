/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:06:57 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/10/14 11:46:48 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;
	t_list	*curr;

	head = NULL;
	if (lst && f)
	{
		curr = lst;
		while (lst)
		{
			new = ft_lstnew((*f)(lst->content));
			ft_lstadd_back(&head, new);
			(*del)(lst->content);
			curr = lst;
			lst = lst->next;
			free(curr);
		}
	}
	return (head);
}
