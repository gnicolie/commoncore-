/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:55:50 by gnicolie          #+#    #+#             */
/*   Updated: 2024/01/21 18:07:59 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n --)
	{
		if (*p != (unsigned char)c)
			p++;
		else
			return (p);
	}
	return (NULL);
}

/* int	main(void)
{
	char	dest= '%';
	char	src= 'l';
	char	null='u';
	int n;

	n = isalnum(dest);
	printf("%d",n);
	n = ft_isalnum(dest);
	printf("%d",n);
	n = ft_isalnum(src);
	printf("%d",n);
	n = ft_isalnum(null);
	printf("%d",n);
	return(0);
} */
