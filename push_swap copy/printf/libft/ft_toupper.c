/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:15:21 by gnicolie          #+#    #+#             */
/*   Updated: 2024/01/21 18:02:06 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
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