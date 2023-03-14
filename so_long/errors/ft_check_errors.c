/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:05:37 by asirodri          #+#    #+#             */
/*   Updated: 2023/03/14 18:01:33 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_check_errors(t_game *game)
{
	if (ft_check_rectangle(game) == 1)
		return (write(1, "Rectangle Error\n", 17));
	if (ft_check_limits(game) == 1)
		return (write(1, "Limits Error\n", 14));
	if (ft_check_parameters(game) == 1)
		return (write(1, "Parameters Error\n", 18));
	if (game->player != 1)
		return (write(1, "Player Error\n", 14));
	if (game->exit != 1)
		return (write(1, "Exit Error\n", 12));
	if (game->collectible <= 0)
		return (write(1, "Collectible Error\n", 19));
	if (ft_flood_fill(game) == 1)
		return (write(1, "Black Hole Error\n", 18));
	return (0);
}
