/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:59:25 by bannabel          #+#    #+#             */
/*   Updated: 2019/06/27 15:11:52 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
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
		res[len_s] = f(s[len_s]);
	return (res);
}
