/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:41:58 by gnicolie          #+#    #+#             */
/*   Updated: 2024/01/21 19:56:17 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	s2 = malloc(len + 1);
	if (!s2)
		return (NULL);
	while (start--)
	{
		s++;
	}
	while (len--)
	{
		*s2 = *s;
		s2++;
		s++;
	}
	*s2 = '\0';
	return (s2);
}
