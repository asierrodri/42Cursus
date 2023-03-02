/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:20:43 by asirodri          #+#    #+#             */
/*   Updated: 2023/03/02 19:21:42 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	*ft_read(char *buffer, int fd, char *str)
{
	char	*aux;
	int		bytes;

	bytes = 1;
	while (bytes != 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
			return (0);
		else if (bytes == 0)
			break ;
		buffer[bytes] = '\0';
		if (!str)
			str = ft_strdup("");
		aux = str;
		str = ft_strjoin(aux, buffer);
	}
	return (str);
}
