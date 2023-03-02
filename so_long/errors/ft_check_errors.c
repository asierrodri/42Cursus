/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:05:37 by asirodri          #+#    #+#             */
/*   Updated: 2023/03/02 20:21:37 by asirodri         ###   ########.fr       */
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
	return (0);
}
