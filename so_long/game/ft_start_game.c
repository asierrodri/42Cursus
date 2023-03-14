/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:35:11 by asirodri          #+#    #+#             */
/*   Updated: 2023/03/14 19:18:35 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_start_game(t_game *game)
{
	int	i;
	int	j;

	i = (game->y) * 32;
	j = game->x * 32;
	game->imgs.mlx = mlx_init();
	game->imgs.window = mlx_new_window(game->imgs.mlx, j, i, "so_long");
	ft_get_images(game);
	ft_print_game(game);
	mlx_loop(game->imgs.mlx);
}
