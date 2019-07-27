/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 17:31:34 by bannabel          #+#    #+#             */
/*   Updated: 2019/06/27 15:17:08 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len_s;
	char	*res;

	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	if (!(res = (char*)malloc(sizeof(char) * len_s + 1)))
		return (NULL);
	res[len_s] = '\0';
	while (len_s-- > 0)
		res[len_s] = f(len_s, s[len_s]);
	return (res);
}
