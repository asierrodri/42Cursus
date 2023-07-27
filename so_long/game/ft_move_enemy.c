/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_enemy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:10:09 by asirodri          #+#    #+#             */
/*   Updated: 2023/04/18 19:04:19 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_rigth(t_game *game, t_enemy *enemy, int x)
{
	char	right;

	right = game->map[enemy[x].y][enemy[x].x + 1];
	if (right == '0')
	{
		game->map[enemy[x].y][enemy[x].x] = '0';
		game->map[enemy[x].y][++enemy[x].x] = 'X';
		ft_print_game(game);
	}
	if (right != '0')
	{
		game->flag[x] = 1;
	}
	if (right == 'P')
		exit (mlx_destroy_window(game->imgs.mlx, game->imgs.window));
	return (0);
}

int	ft_left(t_game *game, t_enemy *enemy, int x)
{
	char	left;

	left = game->map[enemy[x].y][enemy[x].x - 1];
	if (left == '0')
	{
		game->map[enemy[x].y][enemy[x].x] = '0';
		game->map[enemy[x].y][--enemy[x].x] = 'X';
		ft_print_game(game);
	}
	if (left != '0')
		game->flag[x] = 0;
	if (left == 'P')
		exit (mlx_destroy_window(game->imgs.mlx, game->imgs.window));
	return (0);
}

int	ft_move_enemy(t_game *game, t_enemy *enemy)
{
	int	x;

	x = 0;
	while (game->enemy > x)
	{
		if (game->flag[x] == 0)
			ft_rigth(game, enemy, x);
		if (game->flag[x] == 1)
			ft_left(game, enemy, x);
		x++;
	}
	return (0);
}

int	ft_loops(t_game *game)
{
	t_enemy	*enemy;

	enemy = malloc((sizeof (int)) * game->enemy * 2);
	ft_enemy_pos(game, enemy);
	ft_move_enemy(game, enemy);
	return (0);
}
