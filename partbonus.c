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
void	myDel(void *content)
{
	content = 0;
}

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		// t_list	*ft_lstnew(void *content);
		if (strcmp(av[1], "ft_lstnew") == 0)
		{
			printf("==== ft_lstnew ====\n");
			t_list *lstI;
			int	i;

			i = 42;
			lstI = ft_lstnew(&i);
			aff_list(lstI, &affInt);
			free(lstI);

			t_list *lstC;
			char c;

			c = 'c';
			lstC = ft_lstnew(&c);
			aff_list(lstC, &affChar);
			free(lstC);

			t_list *lstS;
			char *str;

			str = "Hello world";
			lstS = ft_lstnew(str);
			aff_list(lstS, &affStr);
			free(lstS);

			t_list *lstS2;
			char *str2;

			str2 = NULL;
			lstS2 = ft_lstnew(str2);
			aff_list(lstS2, &affStr);
			free(lstS2);
		}


		// void	ft_lstadd_front(t_list **alst, t_list *new);
		if (strcmp(av[1], "ft_lstadd_front") == 0)
		{
			printf("==== ft_lstadd_front ====\n");
			t_list *head;
			t_list *elt1;
			t_list *elt2;

			int	i = 45;
			int	j = 62;
			int	k = 38;

			head = ft_lstnew(&i);
			elt1 = ft_lstnew(&j);
			elt2 = ft_lstnew(&k);

			head->next = elt1;
			elt1->next = elt2;

			int l = 55;
			ft_lstadd_front(&head, ft_lstnew(&l));

			aff_list(head, &affInt);
		}

		// void	ft_lstadd_back(t_list **alst, t_list *new);
		if (strcmp(av[1], "ft_lstadd_back") == 0)
		{
			printf("==== ft_lstadd_back ====\n");
			t_list *head;
			t_list *elt1;
			t_list *elt2;

			int i = 45;
			int j = 62;
			int k = 38;

			head = ft_lstnew(&i);
			elt1 = ft_lstnew(&j);
			elt2 = ft_lstnew(&k);

			head->next = elt1;
			elt1->next = elt2;

			int l = 55;
			ft_lstadd_back(&head, ft_lstnew(&l));

			aff_list(head, &affInt);
		}

		// void	ft_lstdelone(t_list *lst, void (*del)(void *));
		if (strcmp(av[1], "ft_lstdelone") == 0)
		{
			printf("==== ft_lstdelone ====\n");
			t_list *head;
			char *str = "hello";
			head = ft_lstnew(str);

			ft_lstdelone(head, &myDel);
			aff_list(head, &affStr);
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