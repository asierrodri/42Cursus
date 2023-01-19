/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:21:08 by asirodri          #+#    #+#             */
/*   Updated: 2023/01/19 17:01:49 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putint(int n);
int	ft_putstr(char *s);
int	ft_printf(char const *str, ...);
int	ft_puthexa(size_t n, char c);
int	ft_txus(char c, va_list arg);
int	ft_putint_unsigned(unsigned int n);

#endif