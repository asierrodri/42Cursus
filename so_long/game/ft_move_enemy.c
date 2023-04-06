/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_enemy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:10:09 by asirodri          #+#    #+#             */
/*   Updated: 2023/04/06 20:47:56 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_rigth(t_game *game)
{
	char	right;

	right = game->map[game->enemyy][game->enemyx + 1];
	if (right == '0')
	{
		game->map[game->enemyy][game->enemyx] = '0';
		game->map[game->enemyy][++game->enemyx] = 'X';
		ft_print_game(game);
		return (1);
	}
	return (0);
}

int	ft_left(t_game *game)
{
	char	right;

	right = game->map[game->enemyy][game->enemyx - 1];
	if (right == '0')
	{
		game->map[game->enemyy][game->enemyx] = '0';
		game->map[game->enemyy][--game->enemyx] = 'X';
		ft_print_game(game);
		return (1);
	}
	return (0);
}

int	ft_move_enemy(t_game *game)
{
	int i = 0;
	if (ft_rigth(game) == 0)
	{
		while (ft_left(game) == 1)
		i++;
	}
	return (0);
}
