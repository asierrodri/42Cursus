/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:24:47 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/22 17:54:16 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%d", ft_str_is_numeric("abdcfhrirofjbngjfueo"));
	printf("\n%d", ft_str_is_numeric("abdcfhri1jbngjfueo"));
	printf("\n%d", ft_str_is_numeric("_4358943ofjbngj32557@"));
	printf("\n%d", ft_str_is_numeric("43589432557"));
	printf("\n%d", ft_str_is_numeric(""));
}
