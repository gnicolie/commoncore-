/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:30:06 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/04 16:32:01 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_t(char **t)
{
	int	i;

	i = 0;
	while (t[i])
	{
		free(t[i]);
		i++;
	}
	free(t);
	return (NULL);
}

static int	ft_wordc(char const *s, char c)
{
	int	count;
	int	in_substring;

	in_substring = 0;
	count = 0;
	while (*s != '\0')
	{
		if (in_substring == 1 && *s == c)
			in_substring = 0;
		if (in_substring == 0 && *s != c)
		{
			in_substring = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*ft_strndup(char	**t, const char *s, size_t n)
{
	char	*dup;
	size_t	i;

	dup = (char *)malloc((n + 1) * sizeof(char));
	if (dup == NULL)
		return (free_t (t));
	i = 0;
	while (i < n)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	char	**t;
	int		nb_word;
	int		index;
	char	*start;

	index = 0;
	nb_word = ft_wordc(s, c);
	t = (char **)malloc(sizeof(char *) * (nb_word + 1));
	if (!t)
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s)
			s++;
		start = (char *)s;
		while (*s != c && *s)
			s++;
		t[index] = ft_strndup(t, start, s - start);
		if (!t[index])
			return (NULL);
		index++;
	}
	t[index] = NULL;
	return (t);
}
