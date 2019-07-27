/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 11:57:36 by bannabel          #+#    #+#             */
/*   Updated: 2019/06/27 17:59:50 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strrchr(const char *s, int c)
{
	size_t			len;
	unsigned char	*str;

	str = (unsigned char*)s;
	len = ft_strlen(s) + 1;
	while (len-- > 0)
		if (str[len] == (unsigned char)c)
			return ((char*)str + len);
	return (NULL);
}
