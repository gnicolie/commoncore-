/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:41:58 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/05 18:20:21 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	char			*start_of_s2;
	unsigned int	lens;

	lens = ft_strlen(s);
	if (start >= lens)
		return (ft_strdup(""));
	if (len > lens - start)
		len = lens - start;
	s2 = (char *)malloc(len + 1);
	if (!s2)
		return (NULL);
	s += start;
	start_of_s2 = s2;
	if (len > lens)
		return (start_of_s2);
	while (len-- && *s != '\0')
	{
		*s2++ = *s++;
	}
	*s2 = '\0';
	return (start_of_s2);
}

/* char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	char			*start_of_s2;

	s2 = (char *)malloc(len + 1);
	if (!s2)
		return (NULL);
	s += start;
	start_of_s2 = s2;
	while (len--)
	{
		*s2++ = *s++;
	}
	*s2 = '\0';
	return (start_of_s2);
} */