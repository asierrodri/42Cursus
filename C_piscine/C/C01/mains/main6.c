/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:28:45 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/19 20:18:27 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *word;
	int	n;

	word = "012345";
	n = ft_strlen(word);
	printf("%d", n);
}
