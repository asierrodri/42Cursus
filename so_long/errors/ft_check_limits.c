/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_limits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:27:00 by asirodri          #+#    #+#             */
/*   Updated: 2023/03/14 19:38:27 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_check_1(t_game *game, int x, int y)
{
	while (x > 0)
	{
		if (game->map[y - 1][x - 1] != '1')
			return (1);
		x--;
	}
	while (y > 0)
	{
		if (game->map[y - 1][x] != '1')
			return (1);
		y--;
	}
	return (0);
}

int	ft_check_limits(t_game *game)
{
	int	y;
	int	x;

	y = 0;
	x = 0;
	while (x != game->x)
	{
		if (game->map[y][x] != '1')
			return (1);
		x++;
	}
	while (y != game->y)
	{
		if (game->map[y][x - 1] != '1')
			return (1);
		y++;
	}
	return (ft_check_1(game, x, y));
}
