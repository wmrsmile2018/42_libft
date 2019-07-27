/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 21:21:19 by bannabel          #+#    #+#             */
/*   Updated: 2019/06/13 21:21:19 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	if (size + 1 == 0)
		return (NULL);
	if(!(str = (char *)malloc(size + 1)))
		return (NULL);
	while (i <= size)
		str[i++] = '\0';
	return (str);
}
