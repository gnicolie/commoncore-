/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:07:57 by gnicolie          #+#    #+#             */
/*   Updated: 2024/01/31 16:14:34 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*r;
	unsigned int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	r = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!r)
		return (NULL);
	while (s[i])
	{
		r [i] = f(i, s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
