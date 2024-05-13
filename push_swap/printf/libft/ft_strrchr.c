/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:50:47 by gnicolie          #+#    #+#             */
/*   Updated: 2024/02/05 17:46:58 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence;
	int		n;

	last_occurrence = NULL;
	n = 0;
	while (s[n])
	{
		if (s[n] == (char) c)
			last_occurrence = (char *)&s[n];
		n++;
	}
	if (s[n] == (char) c)
		last_occurrence = (char *)&s[n];
	return (last_occurrence);
}

/* int	main(void)
{
	char	c = '\0';
	char	*str = "teste";

	printf("%p\n", ft_strrchr(str, c));
	printf("%p", strrchr(str, c));
	return (0);
} */