/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pnbru.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:18:23 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/18 16:24:05 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(unsigned int nb)
{
	char	c;

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		c = '0' + nb % 10;
		write (1, &c, 1);
	}
	if (/* nb >= 0 && */ nb <= 9)
	{
		c = '0' + nb;
		write (1, &c, 1);
	}
}

int	ft_pnbru(unsigned int c)
{
	int	i;

	i = 0;
	if (c == 0)
		return (write(1, "0", 1));
	ft_putnbr(c);
	/* if (c < 0)
	{
		c = c * -1;
	} */
	while (c > 0)
	{
		i++;
		c = c / 10;
	}
	return (i);
}
