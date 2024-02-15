/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:11:55 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/15 20:12:12 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ft_printf.h"

static int	writehex(unsigned long long address, char *hex_digits, int i)
{
	if (address >= 16)
	{
		i = writehex (address / 16, hex_digits, i);
		//i += write (1, &hex_digits[address % 16], 1);
	}
	i += write (1, &hex_digits[address % 16], 1);
	return (i);
}

int	ft_padd(void *p)
{
	unsigned long long	address;
	char				*hex_digits;
	int					i;

	i = ft_pstring("0x");
	hex_digits = "0123456789abcdef";
	address = (unsigned long long)p;
	i += writehex(address, hex_digits, 0);
	return (i);
}