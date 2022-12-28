/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itrueba- <itrueba-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:41:28 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/10/30 23:21:10 by itrueba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_evaluate(char segment[3], int n_array, t_diccionary *dic)
{
	int		normal;
	int		array;
	int		*p_array;
	int		*p_normal;

	normal = 1;
	array = 0;
	p_array = &array;
	p_normal = &normal;
	ft_seg(segment, p_array, p_normal, dic);
	if (*p_array == 1)
		ft_inter_array(n_array, dic);
}

void	ft_groups(char seg_num[4][3], t_diccionary *dic)
{
	int	seg_x;
	int	seg_y;

	seg_x = 3;
	seg_y = 0;
	while (seg_x > -1)
	{
		ft_evaluate(seg_num[seg_x], seg_x, dic);
		seg_x--;
	}
	ft_zero(dic, seg_num);
}

void	ft_seg_num(char *number, int len, char seg_num[4][3], t_diccionary *dic)
{
	char	aux[3];
	int		aux_len;
	int		seg_x;
	int		seg_y;

	seg_x = 0;
	aux_len = len - 1;
	while (0 <= aux_len)
	{
		seg_y = 2;
		aux[0] = number[aux_len - 2];
		aux[1] = number[aux_len - 1];
		aux[2] = number[aux_len];
		while (0 <= seg_y)
		{
			if (aux[seg_y] >= '0' && aux[seg_y] <= '9')
				seg_num[seg_x][seg_y] = aux[seg_y];
			else
				seg_num[seg_x][seg_y] = '0';
			seg_y--;
		}
		seg_x++;
		aux_len = aux_len - 3;
	}
	ft_groups(seg_num, dic);
}

int	ft_number_len(char *number)
{
	int	len;

	len = 0;
	while (number[len])
		len++;
	return (len);
}

void	ft_number(char *number, t_diccionary *dic)
{
	char	seg_num[4][3];
	int		len;
	int		column;
	int		row;

	len = ft_number_len(number);
	row = 0;
	column = 0;
	while (row < 4)
	{
		while (column < 3)
		{
			seg_num [row][column] = '0';
			column++;
		}
		column = 0;
		row++;
	}
	ft_seg_num(number, len, seg_num, dic);
}
