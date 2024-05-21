/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:26:18 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/05 16:45:25 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (!(c >= ' ' && c < 127))
		return (0);
	return (1);
}

/* int	main(void)
{
	char	dest= '%';
	char	src= 'l';
    char	null='u';
    int n;

	n = isalprint(dest);
    printf("%d",n);
	n = ft_isalprint(dest);
    printf("%d",n);
	n = ft_isalprint(src);
    printf("%d",n);
	n = ft_isalprint(null);
    printf("%d",n);
    return(0);
} */