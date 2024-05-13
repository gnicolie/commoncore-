/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:28:09 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/05 17:42:04 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lens;
	size_t	lend;

	i = 0;
	lens = ft_strlen(src);
	lend = ft_strlen(dst);
	if (dstsize <= lend)
		return (lens + dstsize);
	while (src[i] != '\0' && i < dstsize - 1 - lend)
	{
		dst[i + lend] = src[i];
		i++;
	}
	dst [i + lend] = '\0';
	return (lens + lend);
}

/* int	main(void)
{
	char	dst[] = "hola";
	char	src[] = "raton";

	ft_strlcat(dst, src, 8);
	printf("%s",dst);
}
*/