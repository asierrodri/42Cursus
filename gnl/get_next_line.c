/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:08:03 by asirodri          #+#    #+#             */
/*   Updated: 2023/03/30 17:55:14 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line_utils.c"

static char	*ft_next(char *line)
{
	int		i;
	char	*aux;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	aux = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (*aux == '\0')
	{
		free(aux);
		aux = NULL;
		return (0);
	}
	line[i + 1] = '\0';
	return (aux);
}

static char	*ft_read(char *buffer, int fd, char *str)
{
	char	*aux;
	int		bytes;

	bytes = 1;
	while (bytes != 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
			return (0);
		else if (bytes == 0)
			break ;
		buffer[bytes] = '\0';
		if (!str)
			str = ft_strdup("");
		aux = str;
		str = ft_strjoin(str, buffer);
		free(aux);
		aux = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (str);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*line;
	static char	*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (0);
	line = ft_read(buffer, fd, str);
	free(buffer);
	buffer = NULL;
	if (!line)
	{
		free(str);
		str = NULL;
		return (0);
	}
	str = ft_next(line);
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
	while (i < 2)
	{
		line = get_next_line(fd);
		printf("%s", line);
		i++;
	}
}
