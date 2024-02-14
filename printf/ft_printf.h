/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:44:57 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/13 16:43:42 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "ft_printf.h"
# include "./libft/libft.h"

int	ft_printf(char const *format, ...);
int	ft_pchar(int c);
int	ft_pstring(char *c);
int	ft_padd(void *p);
int	ft_pnbr(int c);

#endif