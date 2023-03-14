/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:13:36 by asirodri          #+#    #+#             */
/*   Updated: 2023/03/14 19:18:52 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_put_img(char c, t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->imgs.mlx, game->imgs.window,
		game->imgs.b, j * 32, i * 32);
	if (c == '1')
		mlx_put_image_to_window(game->imgs.mlx, game->imgs.window,
			game->imgs.w, j * 32, i * 32);
	if (c == 'C')
		mlx_put_image_to_window(game->imgs.mlx, game->imgs.window,
			game->imgs.c, j * 32, i * 32);
	if (c == 'P')
		mlx_put_image_to_window(game->imgs.mlx, game->imgs.window,
			game->imgs.p, j * 32, i * 32);
	if (c == 'E')
		mlx_put_image_to_window(game->imgs.mlx, game->imgs.window,
			game->imgs.e, j * 32, i * 32);
	if (c == 'X')
		mlx_put_image_to_window(game->imgs.mlx, game->imgs.window,
			game->imgs.x, j * 32, i * 32);
}

void	ft_print_game(t_game *game)
{
	int	i;
	int	j;

	i = -1;
	while (++i < game->y)
	{
		j = -1;
		while (++j < game->x)
		{
			ft_put_img(game->map[i][j], game, i, j);
		}
	}
}
