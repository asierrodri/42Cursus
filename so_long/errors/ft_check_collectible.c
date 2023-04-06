/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_collectible.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:59:33 by asirodri          #+#    #+#             */
/*   Updated: 2023/04/06 19:38:04 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_check_collectible(t_game *game)
{
	unsigned int	y;
	unsigned int	x;

	y = 1;
	while (game->map2[y])
	{
		x = 1;
		while (x < game->x)
		{
			if (game->map2[y][x] == 'C')
			{
				free(game->map2);
				return (1);
			}
			x++;
		}
		y++;
	}
	free(game->map2);
	return (0);
}
