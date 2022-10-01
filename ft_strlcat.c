/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:07:15 by ablanco-          #+#    #+#             */
/*   Updated: 2022/10/01 18:11:03 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	cont;
	size_t	long_dst;
	size_t	long_src;

	if (!dst && !size)
		return ((size_t) NULL);
	long_src = ft_strlen(src);
	long_dst = ft_strlen((const char *)dst);
	cont = 0;
	if (size < long_dst)
		return (long_src + size);
	if (!size)
		return (long_src);
	if (long_dst < size - 1 && size > 0)
	{
		while (src[cont] != '\0' && long_dst + cont < size - 1)
		{
			dst[long_dst + cont] = src[cont];
			cont++;
		}
		dst[long_dst + cont] = '\0';
	}
	return (long_dst + long_src);
}

/*
int	main (void)
{
	char	dest[100] = "Pablito";
	char	*src = "calbito?";
	char	dest1[100] = "Pablito";
	char	*src1 = "calbito?";

	printf("%zu\n", ft_strlcat(dest, src, 10));
	printf("%s\n", dest);
	printf("%zu\n", strlcat(dest1, src1, 10));
	printf("%s\n", dest);

	return (0);
}
*/
