/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:30:06 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/02 15:39:18 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *) s);
	}
	return (0);
}
static int	wordc(char const *s, char c)
{
	int	totalw;

	totalw = 0;
	while (*s == '\0')
	{
		s = ft_strchr(s, c);
		if (s == NULL)
        {
            break;
        }
		totalw ++;
		s++;
	}
	return (totalw);
}
/* char	**ft_split(char const *s, char c)
{
	
} */

int	main(void)
{
	const char	*dest = "holaasdsd";
	char c = 'a';

	printf("%i", wordc(dest, c));
	return (0);
}
