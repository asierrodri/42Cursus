/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictionary_upload.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itrueba- <itrueba-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:41:34 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/10/30 23:39:48 by itrueba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_print_dict_error(void)
{
	write(2, "Dict Error\n", 11);
}

int	ft_filler_dic(int byte, char buffer[50000])
{
	while (buffer[byte] == ' ')
		byte++;
	while (buffer[byte] == ':')
		byte++;
	while (buffer[byte] == ' ')
		byte++;
	return (byte);
}

int	ft_populate_dic(t_diccionary *dic, char buffer[50000], int row, int *p_byte)
{
	int	character;

	character = 0;
	while (buffer[*p_byte] >= '0' && buffer[*p_byte] <= '9')
	{
		dic[row].number[character] = buffer[*p_byte];
		*p_byte = *p_byte + 1;
		character++;
	}
	*p_byte = ft_filler_dic(*p_byte, buffer);
	character = 0;
	while (buffer[*p_byte] != '\n' && buffer[*p_byte] != '\0')
	{
		dic[row].text[character] = buffer[*p_byte];
		*p_byte = *p_byte + 1;
		character++;
	}
	return (character);
}

void	ft_create_dic(t_diccionary *dic, char buffer[50000], ssize_t n_of_bytes)
{
	int	byte;
	int	character;
	int	row;
	int	*p_byte;

	byte = -1;
	p_byte = &byte;
	row = 0;
	while (byte++ < n_of_bytes)
	{
		character = ft_populate_dic(dic, buffer, row, p_byte);
		dic[row].text[character] = '\0';
		row++;
	}
}

t_diccionary	*diccionary_upload(t_diccionary *dic, char dic_name[])
{
	int		fd;
	char	buffer[50000];
	ssize_t	n_of_bytes;

	fd = open(dic_name, O_RDONLY);
	if (fd == -1)
		ft_print_dict_error();
	else
	{
		n_of_bytes = read(fd, buffer, 50000);
		close(fd);
		if (n_of_bytes == 0)
			ft_print_dict_error();
		else
			ft_create_dic(dic, buffer, n_of_bytes);
	}
	return (dic);
}
