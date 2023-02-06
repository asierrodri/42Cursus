/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:08:03 by asirodri          #+#    #+#             */
/*   Updated: 2023/02/06 19:11:18 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_next(char *buffer)
{
	int		i;
	int		j;
	char	*line;
	
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = malloc((ft_strlen(buffer) - i + 1) * sizeof(char));
	i++;
	j = 0;
	while (buffer[i])
	{
		line[j] = buffer[i];
		i++;
		j++;
	}
	return (line);
}

char	*ft_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = malloc((i + 2) * sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		line[i++] = '\n';
	return (line);
}

char	*ft_read(char *buffer, int fd)
{
	int	bytes;

	bytes = read(fd, buffer, BUFFER_SIZE);
	if (bytes == -1)
	{
		free(buffer);
		return (0);
	}
	buffer[bytes] = '\0';
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char		*buffer;
	char			*line;

	if (fd <= 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (0);
	buffer = ft_read(buffer, fd);
	line = ft_line(buffer);
	buffer = ft_next(buffer);
	return (line);
}

/*int	main(void)
{
	char	*line = "";
	int		fd;

	fd = open("prueba.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s", line);
}
*/
int	main(void)
{
	char	*line = "";
	int		fd;
	int		i;

	fd = open("prueba.txt", O_RDONLY);
	i = 0;
	while (i < 3)
	{
		line = get_next_line(fd);
		printf("%s", line);
		i++;
	}
}
