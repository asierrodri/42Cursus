/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asirodri <asirodri@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:10:53 by asirodri          #+#    #+#             */
/*   Updated: 2022/10/26 17:34:04 by asirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srcsize;
	unsigned int	stop;
	unsigned int	total;

	i = 0;
	srcsize = 0;
	while (dest[i] != '\0')
		i++;
	stop = i + size;
	while (stop > i && src[srcsize] != '\0')
	{
		dest[i] = src[srcsize];
		i++;
		srcsize++;
	}
	dest[i] = '\0';
	while (src[srcsize] != '\0')
		srcsize++;
	if (size < i)
		return (srcsize + size);
	total = stop - size + srcsize;
	return (total);
}
