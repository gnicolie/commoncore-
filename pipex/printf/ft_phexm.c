/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phexm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:29:47 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/18 18:41:40 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	writehex(unsigned int a, char *hex_digits, int i)
{
	if (a >= 16)
	{
		i = writehex (a / 16, hex_digits, i);
	}
	i += write (1, &hex_digits[a % 16], 1);
	return (i);
}

int	ft_phexm(int a)
{
	char				*hex_digits;
	int					i;

	i = 0;
	hex_digits = "0123456789ABCDEF";
	i += writehex((unsigned int)a, hex_digits, 0);
	return (i);
}
