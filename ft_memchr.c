/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:54:09 by ablanco-          #+#    #+#             */
/*   Updated: 2022/07/28 16:16:46 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		if ((char)c == ((char *)s)[cont])
			return ((void *)s + cont);
		cont ++;
	}
	return (NULL);
}

/*
int main(void)
{
	char str[] = "Holiwiiii";
	char ch = 'o';
	char *ret;

	printf ("%s\n", ft_memchr(str, ch, 5));
	printf ("%s\n", memchr(str, ch, 5));	
}
*/
