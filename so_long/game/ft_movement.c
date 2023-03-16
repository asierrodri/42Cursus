/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movement.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:50:48 by asirodri          #+#    #+#             */
/*   Updated: 2023/03/16 18:56:46 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_move_up(t_game *game)
{
	char	next;

	next = game->map[game->beginy - 1][game->beginx];
	if (next == '0' || next == 'C')
	{
		if (next == 'C')
			game->collectible--;
		game->map[game->beginy][game->beginx] = '0';
		game->map[--game->beginy][game->beginx] = 'P';
		game->move++;
	}
	mlx_clear_window(game->imgs.mlx, game->imgs.window);
	if (next == 'X')
		exit (mlx_destroy_window(game->imgs.mlx, game->imgs.window));
	else if (next == 'E' && game->collectible == 0)
		exit (mlx_destroy_window(game->imgs.mlx, game->imgs.window));
	ft_print_game(game);
}

void	ft_move_down(t_game *game)
{
	char	next;

	next = game->map[game->beginy + 1][game->beginx];
	if (next == '0' || next == 'C')
	{
		if (next == 'C')
			game->collectible--;
		game->map[game->beginy][game->beginx] = '0';
		game->map[++game->beginy][game->beginx] = 'P';
		game->move++;
	}
	mlx_clear_window(game->imgs.mlx, game->imgs.window);
	if (next == 'X')
		exit (mlx_destroy_window(game->imgs.mlx, game->imgs.window));
	if (next == 'E' && game->collectible == 0)
		exit (mlx_destroy_window(game->imgs.mlx, game->imgs.window));
	ft_print_game(game);
}

void	ft_move_right(t_game *game)
{
	char	next;

	ft_mlx_xpm_file_to_img(&game->imgs.p, "./imgs/player2.xpm", game);
	next = game->map[game->beginy][game->beginx + 1];
	if (next == '0' || next == 'C')
	{
		if (next == 'C')
			game->collectible--;
		game->map[game->beginy][game->beginx] = '0';
		game->map[game->beginy][++game->beginx] = 'P';
		game->move++;
	}
	mlx_clear_window(game->imgs.mlx, game->imgs.window);
	if (next == 'X')
		exit (mlx_destroy_window(game->imgs.mlx, game->imgs.window));
	if (next == 'E' && game->collectible == 0)
		exit (mlx_destroy_window(game->imgs.mlx, game->imgs.window));
	ft_print_game(game);
}

void	ft_move_left(t_game *game)
{
	char	next;

	ft_mlx_xpm_file_to_img(&game->imgs.p, "./imgs/player.xpm", game);
	next = game->map[game->beginy][game->beginx - 1];
	if (next == '0' || next == 'C')
	{
		if (next == 'C')
			game->collectible--;
		game->map[game->beginy][game->beginx] = '0';
		game->map[game->beginy][--game->beginx] = 'P';
		game->move++;
	}
	mlx_clear_window(game->imgs.mlx, game->imgs.window);
	if (next == 'X')
		exit (mlx_destroy_window(game->imgs.mlx, game->imgs.window));
	if (next == 'E' && game->collectible == 0)
		exit (mlx_destroy_window(game->imgs.mlx, game->imgs.window));
	ft_print_game(game);
}
