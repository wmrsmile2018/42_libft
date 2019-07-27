/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 03:42:47 by bannabel          #+#    #+#             */
/*   Updated: 2019/06/27 15:46:06 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*my_begin(char const *s)
{
	while (*s && (*s == ' ' || *s == '\n' || *s == '\t'))
		s++;
	return ((char*)s);
}

static char		*my_end(char const *s)
{
	size_t		len;

	len = ft_strlen(s);
	while (len-- > 0)
		if (s[len] != ' ' && s[len] != '\t' && s[len] != '\n')
			break ;
	return ((char*)(s + len));
}

char			*ft_strtrim(char const *s)
{
	size_t		len;
	const char	*tmp_end;
	const char	*tmp_begin;
	char		*res;

	if (!s)
		return (NULL);
	tmp_end = my_end(s);
	tmp_begin = my_begin(s);
	if (tmp_end < tmp_begin)
		len = 1;
	else
		len = (size_t)(tmp_end - tmp_begin) + 2;
	if (!(res = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	res[len - 1] = 0;
	while (tmp_begin <= tmp_end && len--)
	{
		res[len - 1] = *tmp_end;
		tmp_end--;
	}
	return (res);
}
