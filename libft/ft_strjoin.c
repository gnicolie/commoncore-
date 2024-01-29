/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:37:17 by gnicolie          #+#    #+#             */
/*   Updated: 2024/01/29 15:02:39 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*sr;
	char	*start_sr;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	sr = malloc(len1 + len2 + 1);
	if (!sr)
		return (NULL);
	start_sr = sr;
	while (*s1)
	{
		*sr++ = *s1++;
	}
	while (*s2)
	{
		*sr++ = *s2++;
	}
	*sr = '\0';
	return (start_sr);
}
