/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:09:07 by gnicolie          #+#    #+#             */
/*   Updated: 2024/01/31 15:42:51 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	flen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -1 * n;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

/* static char	*fzero(char *r)
{
	r = (char *) malloc(sizeof(char) * 2);
	if (!r)
		return (NULL);
	r[0] = '0';
	r[1] = '\0';
	return (r);
} */
char	*ft_itoa(int n)
{
	char	*r;
	int		len;
	long	nbr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nbr = n;
	len = flen(n);
	r = malloc (sizeof(char) *(len + 1));
	if (!r)
		return (NULL);
	r[len] = '\0';
	if (n < 0)
	{
		r[0] = '-';
		nbr = -nbr;
	}
	while (--len >= 0 && nbr >= 10)
	{
		r[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	r [len] = nbr + '0';
	return (r);
}
