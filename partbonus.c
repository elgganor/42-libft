/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   partbonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:55:07 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/10/21 12:55:09 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"
#include <stdio.h>

// Fonctions d'affichage
void	aff_list(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

void	affInt(void *data)
{
	printf("%d\n", *(int *)data);
}

void affChar(void *data)
{
	printf("%c\n", *(char *)data);
}

void affStr(void *data)
{
	printf("%s\n", (char *)data);
}

// Fonctions pour map, del et iter


int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		// t_list	*ft_lstnew(void *content);
		if (strcmp(av[1], "ft_lstnew") == 0)
		{
			printf("==== ft_lstnew ====\n");
			
		}


		// void	ft_lstadd_front(t_list **alst, t_list *new);
		if (strcmp(av[1], "ft_lstadd_front") == 0)
		{
			printf("==== ft_lstadd_front ====\n");
			
		}

		// void	ft_lstadd_back(t_list **alst, t_list *new);
		if (strcmp(av[1], "ft_lstadd_back") == 0)
		{
			printf("==== ft_lstadd_back ====\n");
			
		}

		// void	ft_lstdelone(t_list *lst, void (*del)(void *));
		if (strcmp(av[1], "ft_lstdelone") == 0)
		{
			printf("==== ft_lstdelone ====\n");
			
		}


		// void	ft_lstclear(t_list **lst, void (*del)(void *));
		if (strcmp(av[1], "ft_lstclear") == 0)
		{
			printf("==== ft_lstclear ====\n");

		}


		// t_list	*ft_lstlast(t_list *lst);
		if (strcmp(av[1], "ft_lstlast") == 0)
		{
			printf("==== ft_lstlast ====\n");

		}


		// void 	ft_lstiter(t_list *lst, void (*f)(void *));
		if (strcmp(av[1], "ft_lstiter") == 0)
		{
			printf("==== ft_lstiter ====\n");

		}


		// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *));
		if (strcmp(av[1], "ft_lstmap") == 0)
		{
			printf("==== ft_lstmap ====\n");

		}
	}
	return (0);
}