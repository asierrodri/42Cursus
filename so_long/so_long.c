/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:44:54 by asirodri          #+#    #+#             */
/*   Updated: 2023/07/27 20:03:05 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "utils/ft_read.c"
#include "utils/ft_split.c"
#include "utils/ft_strdup.c"
#include "utils/ft_strjoin.c"
#include "utils/ft_strlen.c"
#include "utils/ft_substr.c"
#include "utils/ft_memcpy.c"
#include "errors/ft_check_ber.c"
#include "errors/ft_check_rectangle.c"
#include "errors/ft_check_errors.c"
#include "errors/ft_check_limits.c"
#include "errors/ft_check_parameters.c"
#include "errors/ft_flood_fill.c"*/

#include "so_long.h"

int	ft_open_map(t_game *game)
{
	int			fd;
	char		*buffer;
	char		*line;
	char		*str;

	fd = open(game->file, O_RDONLY);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (write(1, "File Not Found\n", 16));
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (1);
	str = "";
	line = ft_read(buffer, fd, str);
	free(buffer);
	buffer = NULL;
	if (ft_new_line(line) == 1)
		return (write(1, "New Line Error\n", 16));
	game->map = ft_split(line, '\n', game);
	if (!game->map)
		return (1);
	game->map2 = ft_split(line, '\n', game);
	if (!game->map2)
		return (1);
	close (fd);
	return (0);
}

int	so_long(t_game *game)
{
	if (ft_check_ber(game) != 0)
		exit (1);
	if (ft_open_map(game) != 0)
		return (1);
	if (ft_check_errors(game) != 0)
		return (2);
	else
		ft_start_game(game);
	return (0);
}

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc == 2)
	{
		game.file = argv[1];
		if (so_long(&game) != 0)
			return (1); //voy a tener que freezear
	}
	else
		return (0);
}
