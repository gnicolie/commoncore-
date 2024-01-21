/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:37:24 by gnicolie          #+#    #+#             */
/*   Updated: 2024/01/21 18:07:43 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	*ft_memset(void *b, int c, size_t len)
{
	size_t			count;
	unsigned char	c_comp;

	count = 0;
	c_comp = c;
	while ((((unsigned char *)b)[count]) != '\0' && (len-- > 0))
	{
		((unsigned char *)b)[count] = c_comp;
		count++;
	}
	return (b);
} */
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
