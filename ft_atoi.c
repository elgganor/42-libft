/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 09:58:42 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/10/03 10:05:55 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	sign = 1;
	i = 0;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	res = 0;
	while (str[i] != '\0' && ft_isdigit(str[i]) == 1)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}