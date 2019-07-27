/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 18:59:34 by bannabel          #+#    #+#             */
/*   Updated: 2019/06/24 18:59:35 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *map;

	if (!lst || !f)
		return (NULL);
	map = NULL;
	while (lst)
	{
		ft_lstpush(&map, f(ft_lstnew(lst->content, lst->content_size)));
		lst = lst->next;
	}
	return (map);
}
