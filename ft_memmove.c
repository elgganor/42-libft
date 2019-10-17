/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:41:42 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/10/17 14:14:10 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	t_uchar	*s;
	t_uchar	*d;

	if (!dst || !src)
		return (NULL);
	s = (t_uchar *)src;
	d = (t_uchar *)dst;
	i = 0;
	if (d > s)
		while (0 < len)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}
