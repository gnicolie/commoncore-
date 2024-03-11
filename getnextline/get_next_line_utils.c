#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	n;

	n = 0;
	while (s[n] != '\0' )
	{
		n++;
	}
	return (n);
}

int     ft_strnl(const char *s)
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

char    *join(char *buffer, char* stash) //const?
{
	char    *s1;
    char    *dst;
    int     i;
    int     j;

    i = 0;
	j = 0;
	s1 = (char *)stash;
	if (!stash)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(buffer) + 1));
	if (!dst)
		return (NULL);
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	while (buffer[j] != '\0')
		dst[i++] = buffer[j++];
	dst[ft_strlen(s1) + ft_strlen(buffer)] = '\0';
	return (free(s1), dst);
}
