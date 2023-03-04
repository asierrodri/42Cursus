/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:05:37 by asirodri          #+#    #+#             */
/*   Updated: 2023/03/04 19:10:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_check_errors(t_game *game)
{
	if (ft_check_ber(game) == 1)
	{
		write(1, "Extension Error\n", 17);
		return (1);
	}
	if (ft_check_rectangle(game) == 1)
	{
		write(1, "Rectangle Error\n", 17);
		return (1);
	}
	if (ft_check_limits(game) == 1)
	{
		write(1, "Limits Error\n", 14);
		return (1);
	}
	if (ft_check_parameters(game) == 1)
	{
		write(1, "Parameters Error\n", 18);
		return (1);
	}
	return (0);
}
