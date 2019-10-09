/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:02:32 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/10/09 11:22:02 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*dest;
	char	*s;

	s = (char *)src;
	dest = (char *)dst;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
		{
			dest[i] = s[i];
			i++;
			return (dst + i);
		}
		dest[i] = s[i];
		i++;
	}
	return (0);
}
