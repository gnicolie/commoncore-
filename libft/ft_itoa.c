/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:09:07 by gnicolie          #+#    #+#             */
/*   Updated: 2024/01/29 16:29:08 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*r;
	int		i;
	int		tenpower;

	i = 0;
	tenpower = n;
	while (tenpower > 0)
	{
		i++;
		tenpower = tenpower / 10;
	}
	r = malloc (i);
	while (i > 0)
	{
		r[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (r);
}
