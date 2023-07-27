/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:36:09 by asirodri          #+#    #+#             */
/*   Updated: 2023/07/27 20:01:55 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_new_line(char *line)
{
	int	i;

	i = ft_strlen(line);
	if (*line == '\n')
		return (1);
	if (line[i - 1] != '1')
		return (1);
	while (*line)
	{
		if (*line == '\n' && *(line + 1) == '\n')
			return (1);
		line++;
	}
	return (0);
}
