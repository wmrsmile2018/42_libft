/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 19:38:27 by bannabel          #+#    #+#             */
/*   Updated: 2019/06/26 20:03:13 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	size_t	count;
	char	*res;
	int		flag;

	count = ft_countdigits(n);
	flag = ft_isneg(n);
	if (!(res = (char*)malloc(sizeof(char) * count + 1 + flag)))
		return (NULL);
	res[count + flag] = 0;
	if (n < 0)
		res[0] = '-';
	while (count-- && (res[count + flag] = (n % 10) * (flag ? -1 : 1) + '0'))
		n /= 10;
	return (res);
}
