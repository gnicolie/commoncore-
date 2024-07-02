/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:37:39 by gnicolie          #+#    #+#             */
/*   Updated: 2024/01/21 18:07:41 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *) s);
	}
	return (0);
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