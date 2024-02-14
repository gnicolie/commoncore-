/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:34:48 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/14 16:40:32 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# include <stdio.h> // borrar

int	ft_padd(void *p)
{
	unsigned long long	address;
	char				*hex_digits;
	int					i;

	i = ft_pstring("0x");
	hex_digits = "0123456789abcdef";
	address = (unsigned long long)p;
	if (address > 16)
	{
		ft_padd(hex_digits / 16);
		write ((1, &hex_digits[address % 16], 1) = -1)
			return (-1);
		i++;
	
	}
	if (nb >= 0 && address <= 16)
	{
		c = '0' + hex_digits;
		write (1, &hex_digits[address % 16], 1);
		i++;
	}
	return (i);
}

int main(void)
{
	void *p;
	void *a;
	void *b;
	void *c;
	void *d;
	void *e;
	void *f;
	void *g;

	printf("%p\n", p);
	printf("%p\n", a);
	printf("%p\n", b);
	printf("%p\n", c);
	printf("%p\n", d);
	printf("%p\n", e);
	printf("%p\n", f);
	printf("%p\n", g);
}
