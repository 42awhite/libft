/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:32:30 by ablanco-          #+#    #+#             */
/*   Updated: 2022/07/12 15:34:18 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	cont;

	cont = 0;
	if (size > 0)
	{
		while (src[cont] != '\0' && cont < (size - 1))
		{
			dst[cont] = src[cont];
			cont++;
		}
		dst[cont] = '\0';
	}
	while (src[cont])
		cont++;
	return (cont);
}

/*
int main(void)
{
	char	dest[] = ("estamos estresados!");
	char	src[] = ("Quiero echarme a dormir");

	printf("%zu", ft_strlcpy(dest, src, 20));

	return(0);
}
*/
