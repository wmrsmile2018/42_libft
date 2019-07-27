/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 22:52:25 by bannabel          #+#    #+#             */
/*   Updated: 2019/06/27 15:40:26 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_len(const char *s, char c, size_t pos)
{
	size_t		len;

	len = 0;
	while (s[pos + len] != c && s[pos + len])
		len++;
	return (len);
}

static size_t	words_count(const char *s, char c)
{
	size_t		count;
	size_t		len_s;
	size_t		i;

	i = -1;
	count = 0;
	len_s = ft_strlen(s);
	while (++i < len_s)
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			count++;
	return (count);
}

static void		str_cpy(char *dst, const char *s, size_t len)
{
	size_t		i;

	i = -1;
	while (++i < len - 1)
		dst[i] = s[i];
	dst[i] = 0;
}

char			**ft_strsplit(char const *s, char c)
{
	char		**res;
	size_t		data[5];

	if (!s)
		return (NULL);
	data[0] = ft_strlen(s);
	data[1] = words_count(s, c);
	data[2] = 0;
	data[3] = 0;
	if (!(res = (char**)malloc(sizeof(char*) * (data[1] + 1))))
		return (NULL);
	res[data[1]] = 0;
	while (data[3] < data[0])
	{
		if (s[data[3]] != c)
		{
			data[4] = word_len(s, c, data[3]);
			res[data[2]] = (char*)malloc(sizeof(char) * (data[4] + 1));
			str_cpy(&res[data[2]][0], &s[data[3]], data[4] + 1);
			data[2]++;
			data[3] += data[4];
		}
		data[3]++;
	}
	return (res);
}
