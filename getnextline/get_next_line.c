#include"get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buff;

	line = NULL;
	if (fd < 0 || fd > FOPEN_MAX || !BUFFER_SIZE)
		return (NULL);
	if (read(fd, 0, 0) < 0)
	{
		ft_buffclear(buff, 1);
		return (NULL);
	}
	while (buff[0] || read(fd, buff, BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buff);
		ft_buffclear(buff, 0);
		if (line[ft_strlen(line) - 1] == '\n')
			break ;
	}
	return (line);
}