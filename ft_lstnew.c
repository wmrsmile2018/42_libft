/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 18:17:14 by bannabel          #+#    #+#             */
/*   Updated: 2019/06/26 19:40:38 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*copy(const void *src, size_t n)
{
	void	*cpy;
	size_t	i;

	i = -1;
	if (!(cpy = malloc(n)))
		return (NULL);
	while (++i < n)
		*((char*)cpy + i) = *((char*)src + i);
	return (cpy);
}

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->content_size = content ? content_size : 0;
	new->content = content ? copy(content, content_size) : NULL;
	new->next = NULL;
	return (new);
}
