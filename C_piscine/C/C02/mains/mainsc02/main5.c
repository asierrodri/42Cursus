/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:57:16 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/22 18:23:13 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("%d", ft_str_is_uppercase("abdcfhrirofjbngjfueo"));
	printf("\n%d", ft_str_is_uppercase("ADSGJSFSDLKFALS"));
	printf("\n%d", ft_str_is_uppercase("abdcf1hrirofjbngjfueo"));
	printf("\n%d", ft_str_is_uppercase("abdcf@hrirofjbngjfueo"));
	printf("\n%d", ft_str_is_uppercase(""));
}
