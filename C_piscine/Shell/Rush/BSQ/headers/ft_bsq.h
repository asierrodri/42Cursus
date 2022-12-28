/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:26:09 by emunoz            #+#    #+#             */
/*   Updated: 2022/11/01 09:55:25 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void	ft_open_read(char *map);
int		ft_arg_erros(int argc, char *argv[]);
void	ft_print_map(char *map);
void	ft_change_map(char *buf);

#endif