/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:32:52 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/10/28 09:40:51 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	char	*sub;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	while (ft_isset(s1[i], set) == 1)
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	if (!(sub = ft_substr(s1, i, len - i)))
		return (NULL);
	len = ft_strlen(sub);
	while (ft_isset(sub[len - 1], set) == 1)
		len--;
	if (!(dest = ft_substr(sub, 0, len)))
		return (NULL);
	return (dest);
}
