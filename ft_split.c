/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:59:05 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/10/08 12:46:08 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	nb;
	int	i;

	i = 0;
	nb = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
		{
			i++;
		}
		if (s[i] != '\0' && s[i] != c)
		{
			nb++;
			while (s[i] != c)
				i++;
		}
	}
	return (nb);
}

static size_t ft_get_len_word(const char *s, int index, char c)
{
	size_t	len_word;

	len_word = 0;
	while (s[index] != '\0' && s[index] != c)
	{
		len_word++;
		index++;
	}
	return (len_word);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		nb_word;
	int		i;
	int		j;
	size_t	len_word;

	nb_word = ft_count_word(s, c);
	if (!(res = (char **)malloc(nb_word * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	while (s[i] != '\0' && j < nb_word)
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			len_word = ft_get_len_word(s, i, c);
			res[j] = ft_substr(s, i, len_word);
			j++;
			while (s[i] != '\0' && s[i] != c)
			{
				i++;
			}
		}
	}
	return (res);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	int	i;
	int	nb;
	char **res;

	i = 0;
	if (ac == 2)
	{
		nb = ft_count_word(av[1], ' ');
		res = ft_split(av[1], ' ');
		while (i < nb)
		{
			printf("%s\n", res[i]);
			i++;
		}
	}
	return (0);
}
