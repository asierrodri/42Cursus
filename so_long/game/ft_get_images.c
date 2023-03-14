/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_images.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:53:23 by asirodri          #+#    #+#             */
/*   Updated: 2023/03/14 19:07:26 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_mlx_xpm_file_to_img(void	**ptr, char *dir, t_game *game)
{
	int	res;

	res = 32;
	*ptr = mlx_xpm_file_to_image(game->imgs.mlx, dir, &res, &res);
	if (!*ptr)
	{
		write(1, "Image_Error\n", 13);
		exit(1);
	}
}

void	ft_get_images(t_game *game)
{
	ft_mlx_xpm_file_to_img(&game->imgs.b, "./imgs/back.xpm", game);
	ft_mlx_xpm_file_to_img(&game->imgs.c, "./imgs/collectible.xpm", game);
	ft_mlx_xpm_file_to_img(&game->imgs.e, "./imgs/exit.xpm", game);
	ft_mlx_xpm_file_to_img(&game->imgs.p, "./imgs/player.xpm", game);
	ft_mlx_xpm_file_to_img(&game->imgs.w, "./imgs/walls.xpm", game);
	ft_mlx_xpm_file_to_img(&game->imgs.x, "./imgs/enemy.xpm", game);
}
