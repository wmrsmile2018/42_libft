/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 18:50:26 by bannabel          #+#    #+#             */
/*   Updated: 2019/06/26 17:46:56 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list **target;
	t_list *tmp;

	target = alst;
	if (del)
	{
		while (*alst)
		{
			tmp = *alst;
			*alst = (*alst)->next;
			ft_lstdelone(&tmp, del);
		}
	}
	free(*target);
	*target = NULL;
}
