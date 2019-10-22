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
	free(content);
}

void	myIter(void *content)
{
	printf("%s\n", (char *)content);
}

void	*myMap(void *s)
{
	return (s + 1);
}

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		// t_list	*ft_lstnew(void *content);
		if (strcmp(av[1], "ft_lstnew") == 0)
		{
			printf("==== ft_lstnew ====\n");
			t_list *elt1;
			t_list *elt2;

			int	i = 56;
			int	j = 72;

			elt1 = ft_lstnew(&i);
			elt2 = ft_lstnew(&j);

			elt1->next = elt2;

			aff_list(elt1, &affInt);

			free(elt1);
			free(elt2);
		}


		// void	ft_lstadd_front(t_list **alst, t_list *new);
		if (strcmp(av[1], "ft_lstadd_front") == 0)
		{
			printf("==== ft_lstadd_front ====\n");
			t_list *head;
			t_list *elt1;
			t_list *elt2;
			int i = 56;
			int j = 72;
			int	k = 35;

			ft_lstadd_front(&head, ft_lstnew(&i));
			ft_lstadd_front(&head, ft_lstnew(&j));
			ft_lstadd_front(&head, ft_lstnew(&k));

			aff_list(head, &affInt);
		}

		// void	ft_lstadd_back(t_list **alst, t_list *new);
		if (strcmp(av[1], "ft_lstadd_back") == 0)
		{
			printf("==== ft_lstadd_back ====\n");
			t_list *head = NULL;
			int i = 56;
			int j = 72;
			int k = 35;

			ft_lstadd_back(&head, ft_lstnew(&i));
			ft_lstadd_back(&head, ft_lstnew(&j));
			ft_lstadd_back(&head, ft_lstnew(&k));

			aff_list(head, &affInt);
		}

		// void	ft_lstdelone(t_list *lst, void (*del)(void *));
		if (strcmp(av[1], "ft_lstdelone") == 0)
		{
			printf("==== ft_lstdelone ====\n");
			t_list *a = ft_lstnew("Hello");
			t_list *b = ft_lstnew("World");
			t_list *c = ft_lstnew("Foo");
			t_list *d = ft_lstnew("Bar");
			t_list *e = ft_lstnew("Baz");

			a->next = b;
			b->next = c;
			c->next = d;
			d->next = e;
			ft_lstdelone(c, &myDel);
			aff_list(a, &affStr);
			aff_list(d, &affStr);
		}


		// void	ft_lstclear(t_list **lst, void (*del)(void *));
		if (strcmp(av[1], "ft_lstclear") == 0)
		{
			printf("==== ft_lstclear ====\n");
			t_list *a = ft_lstnew("Hello");
			t_list *b = ft_lstnew("World");
			t_list *c = ft_lstnew("Foo");
			t_list *d = ft_lstnew("Bar");
			t_list *e = ft_lstnew("Baz");

			a->next = b;
			b->next = c;
			c->next = d;
			d->next = e;

			ft_lstclear(&a, &myDel);
			aff_list(a, &affStr);
			aff_list(b, &affStr);
			aff_list(c, &affStr);
			aff_list(d, &affStr);
			aff_list(e, &affStr);
		}


		// t_list	*ft_lstlast(t_list *lst);
		if (strcmp(av[1], "ft_lstlast") == 0)
		{
			printf("==== ft_lstlast ====\n");
			t_list *a = ft_lstnew("Hello");
			t_list *b = ft_lstnew("World");
			t_list *c = ft_lstnew("Foo");
			t_list *d = ft_lstnew("Bar");
			t_list *e = ft_lstnew("Baz");

			a->next = b;
			b->next = c;
			c->next = d;
			d->next = e;

			aff_list(ft_lstlast(a), &affStr);
		}


		// void 	ft_lstiter(t_list *lst, void (*f)(void *));
		if (strcmp(av[1], "ft_lstiter") == 0)
		{
			printf("==== ft_lstiter ====\n");
			t_list *a = ft_lstnew("Hello");
			t_list *b = ft_lstnew("World");
			t_list *c = ft_lstnew("Foo");
			t_list *d = ft_lstnew("Bar");
			t_list *e = ft_lstnew("Baz");

			a->next = b;
			b->next = c;
			c->next = d;
			d->next = e;

			ft_lstiter(a, &myIter);
		}

		// t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
		if (strcmp(av[1], "ft_lstmap") == 0)
		{
			printf("==== ft_lstmap ====\n");
			t_list *a = ft_lstnew("Hello");
			t_list *b = ft_lstnew("World");
			t_list *c = ft_lstnew("Foo");
			t_list *d = ft_lstnew("Bar");
			t_list *e = ft_lstnew("Baz");
			t_list *result;

			a->next = b;
			b->next = c;
			c->next = d;
			d->next = e;

			result = ft_lstmap(a, &myMap, &myDel);
			while (result)
			{
				printf("%s\n", a->content);
				printf("%s\n", result->content);
				result = result->next;
				a = a->next;
			}
		}
	}
	return (0);
}