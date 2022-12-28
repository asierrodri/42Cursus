/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itrueba- <itrueba-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:41:58 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/10/30 23:21:39 by itrueba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_dic
{
	char	number[500];
	char	text[500];
}	t_diccionary;

t_diccionary	*diccionary_upload(t_diccionary *dic, char dic_name[]);
void			ft_number(char *number, t_diccionary *dic);
int				ft_union(t_diccionary *dic, char *number);
void			ft_hundred(char n, t_diccionary *dic);
void			ft_evaluate(char segment[3], int n_array, t_diccionary *dic);
void			ft_inter_array(int n_array, t_diccionary *dic);
void			ft_seg(char segment[3], int *p_a, int *p_n, t_diccionary *dic);
int				count_rows(char dic_name[]);
int				ft_tens(char number1, char number2, t_diccionary *dic);
void			ft_zero(t_diccionary *dic, char seg_num[4][3]);
void			ft_print_dict_error(void);

#endif
