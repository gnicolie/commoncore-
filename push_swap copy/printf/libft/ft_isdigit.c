/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:37:01 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/05 16:47:04 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

/* int	main(void)
{
	char	dest= '2';
	char	src= 'l';
    char	null='u';
    int n;

	n = ft_isdigit(dest);
    printf("%d",n);
    n = isdigit(dest);
    printf("%d",n);
	n = ft_isdigit(src);
    printf("%d",n);
	n = ft_isdigit(null);
    printf("%d",n);
    return(0);
} */