/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:29:48 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/27 13:08:36 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int main (void)
{

	char str1[] = "Coucou\ntu vas bien ?";
	char str2[] = "Coucou tu vas bie\t\v\0n";
	ft_putstr_non_printable(str1);
	write(1, "\n", 1);
	ft_putstr_non_printable(str2);;
	write(1, "\n", 1);
} 
