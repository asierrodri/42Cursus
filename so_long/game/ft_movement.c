/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movement.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:50:48 by asirodri          #+#    #+#             */
/*   Updated: 2023/10/20 21:50:37 by asirodri         ###   ########.fr       */
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
		if (game->collectible == 0)
			ft_mlx_xpm_file_to_img(&game->imgs.x, "./imgs/enemy2.xpm", game);
	}
	mlx_clear_window(game->imgs.mlx, game->imgs.window);
	if (next == 'X')
		ft_close(game);
	else if (next == 'E' && game->collectible == 0)
		ft_close(game);
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
		if (game->collectible == 0)
			ft_mlx_xpm_file_to_img(&game->imgs.x, "./imgs/enemy2.xpm", game);
	}
	mlx_clear_window(game->imgs.mlx, game->imgs.window);
	if (next == 'X')
		ft_close(game);
	if (next == 'E' && game->collectible == 0)
		ft_close(game);
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
		if (game->collectible == 0)
			ft_mlx_xpm_file_to_img(&game->imgs.x, "./imgs/enemy2.xpm", game);
	}
	mlx_clear_window(game->imgs.mlx, game->imgs.window);
	if (next == 'X')
		ft_close(game);
	if (next == 'E' && game->collectible == 0)
		ft_close(game);
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
		if (game->collectible == 0)
			ft_mlx_xpm_file_to_img(&game->imgs.x, "./imgs/enemy2.xpm", game);
	}
	mlx_clear_window(game->imgs.mlx, game->imgs.window);
	if (next == 'X')
		ft_close(game);
	if (next == 'E' && game->collectible == 0)
		ft_close(game);
	ft_print_game(game);
}
