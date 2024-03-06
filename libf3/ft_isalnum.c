/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:06:47 by gnicolie          #+#    #+#             */
/*   Updated: 2024/01/21 18:08:28 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
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
