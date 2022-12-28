/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:15:22 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/24 13:19:05 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	ft_putstr_non_printable("Hola\sad como estas");
	write('\n');
	ft_putstr_non_printable("Hola como vas bie\t\v\0n");
	write('\n');
	ft_putstr_non_printable("");
}
