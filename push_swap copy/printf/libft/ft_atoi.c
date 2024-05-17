/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:05:39 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/06 14:52:32 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_str_to_int(const char *str, int c, int n)
{
	while (str[c] >= '0' && str[c] <= '9')
	{
		n = n * 10 + (str[c] - '0');
		c++;
	}
	return (n);
}

int	ft_atoi(const char *str)
{
	int	c;
	int	n;
	int	i;

	i = 1;
	c = 0;
	n = 0;
	while ((str[c] == ' ') || (str[c] == '\f') || (str[c] == '\n')
		|| (str[c] == '\r') || (str[c] == '\t') || (str[c] == '\v'))
	{
		c++;
	}
	if (str[c] == '-' || str[c] == '+' )
	{
		if (str[c] == '-')
			i = -1;
		c++;
	}
	n = ft_str_to_int(str, c, n) * i;
	return (n);
}
