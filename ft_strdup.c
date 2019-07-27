/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:05:17 by bannabel          #+#    #+#             */
/*   Updated: 2019/06/27 15:01:43 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = -1;
	if (!(dup = (char*)malloc(sizeof(char) * (len + 1))))
		return ((void*)0);
	while (++i < len)
		dup[i] = s1[i];
	dup[i] = 0;
	return (dup);
}
