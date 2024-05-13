/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:12:07 by gnicolie          #+#    #+#             */
/*   Updated: 2024/01/21 18:34:34 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	char	*s3;

	s2 = malloc(ft_strlen(s1)+1);
	if (!s2)
		return (NULL);
	s3 = s2;
	while (*s1)
	{
		*s2 = *s1;
		s1++;
		s2++;
	}
	*s2 = '\0';
	return (s3);
}
