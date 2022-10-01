/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:53:46 by ablanco-          #+#    #+#             */
/*   Updated: 2022/10/01 20:45:24 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	cont;

	if (dst == src)
		return (dst);
	if (dst < src)
	{
		cont = 0;
		while (cont < len)
		{
			((char *)dst)[cont] = ((char *)src)[cont];
			cont++;
		}
	}
	else
	{
		cont = len;
		while (cont > 0)
		{
			((char *)dst)[cont - 1] = ((char *)src)[cont - 1];
			cont--;
		}
	}
	return (dst);
}

/**
int	main(void)
{
	char	dest[] = "oldstring";
	char	dest1[] = "oldstring";
	char	src[] = "***newstring***";
	char	src1[] = "***newstring***";
	
	printf("Primero %s\n", ft_memmove(src, src + 3, 9));
	printf("After memmove dest = %s, src = %s\n", src, src + 3);

//	printf("Segundo %s\n", memmove(src1, src1 + 3, 9));
//	printf("After memmove dest = %s, src = %s\n", dest, src);
}
*/
