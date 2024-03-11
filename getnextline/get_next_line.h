#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000000
# endif

char	*get_next_line(int fd);
char	*update_stash(char *stash);
char	*select_line(char *stash);
char	*read_s(int fd, char *stash);
size_t	ft_strlen(const char *s);
int	    ft_strnl(const char *s);
char    *join(char *buffer, char* stash);


#endif