/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:33:39 by ablanco-          #+#    #+#             */
/*   Updated: 2022/06/22 16:11:00 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	q;
	char	*strd;
	char	*strs;

	strd = dst;
	strs = (char *)src;
	q = 0;
	if (strd == 0 && strs == 0)
	{
		return (NULL);
	}
	while (q < n)
	{
		strd[q] = strs[q];
		q++;
	}
	return (strd);
}
/*
#include <string.h>
#include <stdio.h>

int	main (void)
{
	char	str[] = "hola caracola";
	char	str2[] = "Vamos a ver si funciona";

	printf("%s\n", ft_memcpy(str, str2, 4));
	printf("%s", memcpy(str, str2, 4));
}*/