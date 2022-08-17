/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:25:46 by ablanco-          #+#    #+#             */
/*   Updated: 2022/07/29 15:32:32 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		if (((unsigned char *)s1)[cont] != ((unsigned char *)s2)[cont])
			return (((unsigned char *)s1)[cont] - ((unsigned char *)s2)[cont]);
		cont ++;
	}
	return (0);
}

/*
int main(void)
{
	char str[] = "Me voy a Tenerife";
	char str2[] = "Me voy a jugar";

	printf ("%d\n", ft_memcmp(str, str2, 14));
	printf ("%d\n", memcmp(str, str2, 14));
}
*/