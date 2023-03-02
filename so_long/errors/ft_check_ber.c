/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:58:00 by asirodri          #+#    #+#             */
/*   Updated: 2023/03/02 19:06:39 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_check_ber(t_game *game)
{
	int		i;
	char	*str;

	str = game->file;
	i = ft_strlen(str);
	if (str[i - 1] != 'r' || str[i - 2] != 'e' || str[i - 3] != 'b'
		|| str[i - 4] != '.')
		return (1);
	return (0);
}
