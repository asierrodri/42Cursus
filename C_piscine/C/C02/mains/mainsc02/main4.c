/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:57:16 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/22 17:58:53 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("%d", ft_str_is_lowercase("abdcfhrirofjbngjfueo"));
	printf("\n%d", ft_str_is_lowercase("abdcAfhrirofjbngjfueo"));
	printf("\n%d", ft_str_is_lowercase("abdcf1hrirofjbngjfueo"));
	printf("\n%d", ft_str_is_lowercase("abdcf@hrirofjbngjfueo"));
	printf("\n%d", ft_str_is_lowercase(""));
}
