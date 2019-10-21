/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:20:55 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/10/14 12:03:54 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
		t_list *last;

		last = *alst;
		new->next = NULL;
		if ((*alst) == NULL)
			(*alst) = new;
		else
		{
			while (last->next != NULL)
				last = last->next;
			last->next = new;
		}
}