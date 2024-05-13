/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:37:24 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/05 16:52:44 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*d;

	d = (unsigned char *)b;
	while (len-- > 0)
	{
		*d++ = (unsigned char) c;
	}
	return (b);
}

/* int	main(void)
{
	char	b[] = "hola";
	ft_memset(b,'x',3);
	printf("%s",b);
} */