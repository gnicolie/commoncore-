/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:26:31 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/05 17:10:14 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;

	d = dst;
	if (!dst && !src)
		return (NULL);
	while (n-- > 0)
	{
		*d = *(const unsigned char *)src;
		d++;
		src++;
	}
	return (dst);
}

/*  int	main(void)
{
	char	dst[] = "hola";
	char	src[] = "raton";

	ft_memcpy(dst, src, 5);
	printf("%s",dst);
} */