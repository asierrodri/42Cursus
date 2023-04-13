/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_enemy_pos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:26:20 by asirodri          #+#    #+#             */
/*   Updated: 2023/04/13 19:34:43 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_enemy_pos(t_game *game, t_enemy *enemy)
{
	int		i;
	int		j;
	int		x;

	i = 0;
	x = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] == 'X')
			{
				enemy[x].x = j;
				enemy[x].y = i;
				x++;
			}
			j++;
		}
		i++;
	}
}
