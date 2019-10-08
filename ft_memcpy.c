/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:49:08 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/10/08 08:55:40 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	size_t	i;

	dest = (char *)dst;
	i = 0;
	while (i < n)
	{
		dest[i] = (char *)src[i];
		i++;
	}
	return (dst);
}
