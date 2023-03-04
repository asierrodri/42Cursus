/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_parameters.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:44:24 by marvin            #+#    #+#             */
/*   Updated: 2023/03/04 18:44:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int ft_check_parameters(t_game *game)
{
    int y;
    int x;

    y = 1;
    while (game->map[y])
    {
        x = 1;
        while (x != game->x)
        {
            if (game->map[y][x] != '1' && game->map[y][x] != '0' && game->map[y][x] != 'E' && game->map[y][x] != 'P' && game->map[y][x] != 'C' && game->map[y][x] != 'X')
                return (1);
            x++;
        }
        y++;
    }
    return (0);
}
