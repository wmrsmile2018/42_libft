/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 23:55:40 by bannabel          #+#    #+#             */
/*   Updated: 2019/06/27 14:47:31 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
		ft_putchar_fd('-', fd);
	if ((nb >= 0 ? nb >= 10 : nb <= -10))
		ft_putnbr_fd((nb > 0 ? nb / 10 : (nb / 10) * -1), fd);
	ft_putchar_fd((nb >= 0 ? nb % 10 : (nb % 10) * -1) + '0', fd);
}
