/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:59:40 by gnicolie          #+#    #+#             */
/*   Updated: 2024/03/12 16:15:36 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	int	n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

int	ft_strnl(char *s)
{
	while (*s != '\0')
	{
		if (*s == '\n')
		{
			return (1);
		}
		s++;
	}
	return (0);
}

int	filldst(char *s1, char *dst)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	return (i);
}

char	*join(char *buffer, char *stash)
{
	char	*s1;
	char	*dst;
	int		i;
	int		j;

	j = 0;
	s1 = (char *)stash;
	if (!stash)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	dst = (char *)malloc
		(sizeof(char) * (ft_strlen(s1) + ft_strlen(buffer) + 1));
	if (!dst)
		return (NULL);
	i = filldst(s1, dst);
	while (buffer[j] != '\0')
		dst[i++] = buffer[j++];
	dst[ft_strlen(s1) + ft_strlen(buffer)] = '\0';
	return (free(s1), dst);
}
