/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flood_fill.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:46:53 by asirodri          #+#    #+#             */
/*   Updated: 2023/03/14 18:08:37 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	fill(t_game *game, int x, int y, int flag)
{
	if (game->map2[y][x] == '1')
		return (flag);
	else if (game->map2[y][x] == 'X')
		return (flag);
	else if (game->map2[y][x] == 'E')
	{
		flag++;
		return (flag);
	}
	game->map2[y][x] = '1';
	flag = fill(game, x - 1, y, flag);
	flag = fill(game, x + 1, y, flag);
	flag = fill(game, x, y - 1, flag);
	flag = fill(game, x, y + 1, flag);
	return (flag);
}


int	ft_flood_fill(t_game *game)
{
	int		flag;

	flag = 0;
	if (fill(game, game->beginx, game->beginy, flag) == 0)
	{	
		free(game->map2);
		return (1);
	}
	else
	{
		free(game->map2);
		return (0);
	}
}
