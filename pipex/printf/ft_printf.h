/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:44:57 by gnicolie          #+#    #+#             */
/*   Updated: 2024/06/28 17:05:58 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "ft_printf.h"
# include "../libft/libft.h"
# include <stdio.h>

int	ft_printf(char const *format, ...);
int	ft_pchar(int c);
int	ft_pstring(char *c);
int	ft_padd(void *p);
int	ft_pnbr(int c);
int	ft_pnbru(unsigned int c);
int	ft_phex(int a);
int	ft_phexm(int a);

#endif