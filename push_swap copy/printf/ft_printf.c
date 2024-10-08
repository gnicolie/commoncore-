/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:50:47 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/18 18:34:01 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(const char *c, va_list args)
{
	int	i;

	i = 0;
	if (*c == 'c')
		i += ft_pchar(va_arg(args, int));
	else if (*c == 's')
		i += ft_pstring(va_arg(args, char *));
	else if (*c == 'p')
		i += ft_padd(va_arg(args, void *));
	else if (*c == 'd' || *c == 'i')
		i += ft_pnbr(va_arg(args, int));
	else if (*c == 'u')
		i += ft_pnbru(va_arg(args, unsigned int));
	else if (*c == 'x')
		i += ft_phex(va_arg(args, unsigned int));
	else if (*c == 'X')
		i += ft_phexm(va_arg(args, unsigned int));
	else if (*c == '%')
		i += ft_pchar(*c);
	return (i);
}

int	ft_printf(char const *format, ...)
{
	int		i;
	va_list	args;

	va_start(args, format);
	i = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			i += ft_format(++format, args);
		}
		else
		{
			write (1, format, 1);
			i++;
		}
		format++;
	}
	va_end(args);
	return (i);
}
