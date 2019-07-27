/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 11:58:17 by bannabel          #+#    #+#             */
/*   Updated: 2019/06/27 15:19:15 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	size_t		t;
	long long	res;
	char		sign;

	t = 0;
	res = 0;
	sign = 1;
	while (str[t] == '\t' || str[t] == '\n' || str[t] == '\v' ||
		str[t] == '\f' || str[t] == '\r' || str[t] == ' ')
		t++;
	if (str[t] == '-' || str[t] == '+')
		if (str[t++] == '-')
			sign = -1;
	while (str[t] >= '0' && str[t] <= '9')
	{
		if (res != ((res << 3) + (res << 1) + str[t] - '0') / 10)
			return (sign == -1 ? 0 : -1);
		res = (res << 3) + (res << 1) + str[t++] - '0';
	}
	return (res * sign);
}
