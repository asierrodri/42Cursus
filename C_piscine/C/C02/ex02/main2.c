/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:04:18 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/22 18:07:58 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("%d", ft_str_is_alpha("abdcfhrirofjbngjfueo"));
	printf("\n%d", ft_str_is_alpha("abdAYUcfhrirofjbngjfueo"));
	printf("\n%d", ft_str_is_alpha("abdcfhAAAri1jbngjfueo"));
	printf("\n%d", ft_str_is_alpha("_43589A43ofjbngj32557@"));
	printf("\n%d", ft_str_is_alpha("43589432557"));
	printf("\n%d", ft_str_is_alpha(""));
}
