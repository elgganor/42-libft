/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:40:01 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/10/14 10:02:34 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

t_list	*ft_lstnew(void *content)
{
	size_t	data_size;
	size_t	i;
	t_list	*new_node;

	if (!content)
		return (NULL);
	data_size = ft_strlen((char *)content);
	if (!(new_node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new_node->next = NULL;
	new_node->content = malloc(data_size);
	i = 0;
	while (i < data_size)
	{
		*(char *)(new_node->content + i) = *(char *)(content + i);
		i++;
	}
	return (new_node);
}
