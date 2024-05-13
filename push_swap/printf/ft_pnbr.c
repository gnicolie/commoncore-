/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pnbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:52:14 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/15 18:39:15 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		c = '0' + nb % 10;
		write (1, &c, 1);
	}
	if (nb >= 0 && nb <= 9)
	{
		c = '0' + nb;
		write (1, &c, 1);
	}
}

int	ft_pnbr(int c)
{
	int	i;

	i = 0;
	if (c == -2147483648)
		return (write(1, "-2147483648", 11));
	if (c == 0)
		return (write(1, "0", 1));
	ft_putnbr(c);
	if (c < 0)
	{
		c = c * -1;
		i++;
	}
	while (c > 0)
	{
		i++;
		c = c / 10;
	}
	return (i);
}
