/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:41:42 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/10/15 11:51:31 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*tmp;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (!(tmp = (char *)malloc(sizeof(char) * len)))
		return (dst);
	while (s[i] != '\0' && i < len)
	{
		tmp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		d[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (dst);
}
