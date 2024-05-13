/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:05:23 by gnicolie          #+#    #+#             */
/*   Updated: 2024/01/29 16:06:15 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed_str;

	start = 0;
	end = ft_strlen(s1);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (ft_strchr (set, s1[start]) && s1[start])
		start++;
	while (ft_strchr (set, s1[end - 1]) && end > start)
		end--;
	trimmed_str = ft_substr(s1, start, end - start);
	return (trimmed_str);
}
