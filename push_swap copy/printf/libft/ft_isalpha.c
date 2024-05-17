/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:20:27 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/05 16:45:22 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		return (0);
	return (1);
}

/* int	main(void)
{
	char	dest= '2';
	char	src= 'l';
    char	null='u';
    int n;

	n = isalpha(dest);
    printf("%d",n);
	n = ft_isalpha(dest);
    printf("%d",n);
	n = ft_isalpha(src);
    printf("%d",n);
	n = ft_isalpha(null);
    printf("%d",n);
    return(0);
}*/