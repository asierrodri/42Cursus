/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:57:07 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/25 18:04:17 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src[] = " Mundo";
	char	dest[] = "Hola"; 
	printf("%s", ft_strcat(dest, src));
}
