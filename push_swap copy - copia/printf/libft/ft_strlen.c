/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:26:23 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/05 16:50:11 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	n;

	n = 0;
	while (s[n] != '\0' )
	{
		n++;
	}
	return (n);
}

/*  int	main(void)
{
	char	dest[]= "ha";

	printf("%zu",ft_strlen(dest));
	printf("%c",dest[1]);
	return (0);
}  */