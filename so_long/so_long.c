/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:44:54 by asirodri          #+#    #+#             */
/*   Updated: 2023/04/13 18:46:31 by asirodri         ###   ########.fr       */
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
		return (1);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (1);
	str = "";
	line = ft_read(buffer, fd, str);
	free(buffer);
	buffer = NULL;
	game->map = ft_split(line, '\n', game);
	if (game->map)
		game->map2 = ft_split(line, '\n', game);
	return (0);
}

int	so_long(t_game *game, char *file)
{

	game->file = file;
	if (ft_check_ber(game) == 1)
		exit(1);
	if (ft_open_map(game) == 1)
		exit (1);
	if (ft_check_errors(game) != 0)
		exit (1);
	else
		ft_start_game(game);
	return (0);
}

int	main(void)
{
	char	*file;
	t_game	game;

	file = "maps/map2.ber";
	so_long(&game, file);
}
