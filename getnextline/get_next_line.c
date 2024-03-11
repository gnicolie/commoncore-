#include"get_next_line.h"

char	*read_s(int fd, char *stash)
{
	char	*buffer;
	ssize_t	bytes_read;

	bytes_read = 1;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(buffer), NULL);
		buffer[bytes_read] = '\0';
		stash = join(stash, buffer);
		if (ft_strnl(stash) == 1)
			break;
	}
	return (free(buffer), stash);
}

char	*select_line(char *stash)
{
	size_t			index;
	char			*line;

	index = 0;
	if (!stash[index])
		return (NULL);
	while (stash[index] != '\n' && stash[index] != '\0')
		index++;
	line = (char *)malloc(sizeof(char) * (++index + 1));
	if (!line)
		return (NULL);
	index = 0;
	while (stash[index] != '\n' && stash[index] != '\0')
	{
		line[index] = stash[index];
		index++;
	}
	if (stash[index] == '\n')
	{
		line[index] = stash[index];
		index++;
	}
	line[index] = '\0';
	return (line);
}

char	*update_stash(char *stash)
{
	size_t			i;
	size_t			j;
	char			*new_stash;

	i = 0;
	j = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
		i++;
	if (!stash[i])
		return (free(stash), NULL);
	new_stash = (char *)malloc(sizeof(char) * ((ft_strlen(stash) - i) + 1));
	if (!new_stash)
		return (NULL);
	while (stash[++i] != '\0')
		new_stash[j++] = stash[i];
	new_stash[j] = '\0';
	return (free(stash), new_stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 256)
		return (NULL);
	stash = read_s(fd, stash);
	if (!stash)
		return (NULL);
	line = select_line(stash);
	stash = update_stash(stash);
	return (line);
}
int	main(void)
{
	int		fd;
	char	*singleLine;

	singleLine = malloc(1 * sizeof(char));
	fd = open("testing.txt", 256);
	while(singleLine != NULL)
	{
		free(singleLine);
		singleLine = get_next_line(fd);
		printf("%s", singleLine);
	}
	close(fd);
	return (0);
}
