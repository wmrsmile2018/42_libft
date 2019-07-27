/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:25:55 by bannabel          #+#    #+#             */
/*   Updated: 2019/06/27 15:05:16 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	original_dst;

	len_src = 0;
	len_dst = 0;
	original_dst = ft_strlen(dst);
	while (dst[len_dst] && len_dst < size)
		len_dst++;
	if (len_dst == size)
		return (size + ft_strlen(src));
	while (src[len_src] && len_dst < size - 1)
		dst[len_dst++] = src[len_src++];
	dst[len_dst] = '\0';
	return (original_dst + ft_strlen(src));
}
