/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:00:23 by bannabel          #+#    #+#             */
/*   Updated: 2019/04/05 16:00:24 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	src = (unsigned char*)s;
	i = -1;
	while (++i < n)
	{
		if (src[i] == (unsigned char)c)
			break ;
	}
	if (n == i)
		return (NULL);
	return ((void*)(src + i));
}
