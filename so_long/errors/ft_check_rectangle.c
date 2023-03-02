/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rectangle.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:55:19 by asirodri          #+#    #+#             */
/*   Updated: 2023/03/02 20:23:53 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_check_rectangle(t_game *game)
{
	int	y;

	game->x = ft_strlen(game->map[0]);
	y = 1;
	while (game->map[y])
	{
		if (ft_strlen(game->map[y]) != game->x)
			return (1);
		y++;
	}
	return (0);
}
