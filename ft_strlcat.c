/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:12:26 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/10/07 12:13:32 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	dst_len;
	size_t	i;

	len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize == 0 || dstsize < ft_strlen(dst))
		return (len);
	i = dst_len - 1;
	while (i < dstsize - 2)
	{
		dst[i] = src[i];
		i++;
	}
	dst[dstsize - 1] = '\0';
	return (len + dst_len);
}
