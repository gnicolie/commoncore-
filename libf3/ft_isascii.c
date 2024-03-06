/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:15:57 by gnicolie          #+#    #+#             */
/*   Updated: 2024/01/21 18:08:22 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (1);
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
