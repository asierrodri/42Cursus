/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:35:11 by asirodri          #+#    #+#             */
/*   Updated: 2023/04/18 19:35:47 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_close(t_game *game)
{
	exit (mlx_destroy_image(game->imgs.mlx, game->imgs.window));
}

int	ft_key(int keycode, t_game *game)
{
	if (keycode)
		mlx_loop_hook(game->imgs.mlx, ft_loops, game);
	if (keycode == 13 || keycode == 126)
		ft_move_up(game);
	if (keycode == 1 || keycode == 125)
		ft_move_down(game);
	if (keycode == 2 || keycode == 124)
		ft_move_right(game);
	if (keycode == 0 || keycode == 123)
		ft_move_left(game);
	if (keycode == 53 || keycode == 7)
		ft_close(game);
	mlx_string_put(game->imgs.mlx, game->imgs.window, game->x,
		(game->y + 0.8) * 32, 2110411, "Movements: ");
	mlx_string_put(game->imgs.mlx, game->imgs.window, game->x * 7,
		(game->y + 0.8) * 32, 2110411, ft_itoa(game->move));
	return (0);
}

void	ft_start_game(t_game *game)
{
	int	i;
	int	j;
	int	x;

	i = (game->y + 1) * 32;
	j = game->x * 32;
	x = 0;
	game->move = 0;
	game->imgs.mlx = mlx_init();
	game->imgs.window = mlx_new_window(game->imgs.mlx, j, i, "so_long");
	ft_get_images(game);
	ft_print_game(game);
	game->flag = malloc((sizeof (int)) * game->enemy + 1);
	while (game->enemy > x)
		game->flag[x++] = 0;
	mlx_string_put(game->imgs.mlx, game->imgs.window, game->x,
		(game->y + 0.8) * 32, 2110411, "Movements: ");
	mlx_string_put(game->imgs.mlx, game->imgs.window, game->x * 7,
		(game->y + 0.8) * 32, 2110411, ft_itoa(game->move));
	mlx_key_hook(game->imgs.window, ft_key, game);
	mlx_hook(game->imgs.window, 17, 17, ft_close, game);
	mlx_loop(game->imgs.mlx);
}
