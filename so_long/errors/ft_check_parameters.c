/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_parameters.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:44:24 by marvin            #+#    #+#             */
/*   Updated: 2023/03/04 18:44:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_check_parameters(t_game *game)
{
	unsigned int	y;
	unsigned int	x;

	y = 1;
	game->player = 0;
	game->exit = 0;
	game->collectible = 0;
	while (game->map[y])
	{
		x = 1;
		while (x < game->x)
		{
			if (game->map[y][x] != '1' && game->map[y][x] != '0'
				&& game->map[y][x] != 'E' && game->map[y][x] != 'P'
				&& game->map[y][x] != 'C' && game->map[y][x] != 'X')
				return (1);
			x++;
		}
		y++;
	}
	ft_save_player(game);
	ft_save_enemy(game);
	return (0);
}

void	ft_save_player(t_game *game)
{
	unsigned int	y;
	unsigned int	x;

	y = 1;
	while (game->map[y])
	{
		x = 1;
		while (x != game->x)
		{
			if (game->map[y][x] == 'P')
			{
				game->beginx = x;
				game->beginy = y;
				game->player++;
			}
			if (game->map[y][x] == 'E')
				game->exit++;
			if (game->map[y][x] == 'C')
				game->collectible++;
			x++;
		}
		y++;
	}
}

void	ft_save_enemy(t_game *game)
{
	unsigned int	y;
	unsigned int	x;

	y = 0;
	game->enemy = 0;
	while (game->map[y])
	{
		x = 0;
		while (game->map[y][x])
		{
			if (game->map[y][x] == 'X')
				game->enemy++;
			x++;
		}
		y++;
	}
}
