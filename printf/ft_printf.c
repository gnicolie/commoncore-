/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:50:47 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/09 15:31:55 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(char c, va_list args)
{
	int	i;

	if (c == 'c')
		i += ft_pchar(va_arg(args, char));//char
	else if (c == 's')
		i += ft_pchar(va_arg(args, int));
	else if (c == 'p')
		i += ft_pchar(va_arg(args, int));
	else if (c == 'd')
		i += ft_pchar(va_arg(args, int));
	else if (c == 'i')
		i += ft_pchar(va_arg(args, int));
	else if (c == 'u')
		i += ft_pchar(va_arg(args, int));
	else if (c == 'x')
		i += ft_pchar(va_arg(args, int));
	else if (c == 'X')
		i += ft_pchar(va_arg(args, int));
	else if (c == '%')
		i += ft_pchar(va_arg(args, int));
	return (i);
}

int	ft_printf(char const *format, ...)
{
	int		i;
	va_list	args;

	va_start(args, format);
	i = 0;
	while (*format == '\0')
	{
		if (format == '%')
		{
			i += ft_format(++format, args);
		}
		else
		{
			write (1, format, 1);
			i++;
		}
	}
	va_end(args);
	return (i);
}
