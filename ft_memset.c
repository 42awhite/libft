/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:56:11 by ablanco-          #+#    #+#             */
/*   Updated: 2022/07/11 15:45:45 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void *ft_memset(void *b, int c, size_t len)
{
	size_t q;
	unsigned char *str;

	str = b;
	q = 0;
	while (q < len)
	{
		str[q] = (unsigned char) c;
		q++;
	}
	return (str);
}

/*
#include <string.h>
#include <stdio.h>

int	main (void)
{
	char	str[] = "hola caracola";
	
	printf("%s", ft_memset(str, '*', 4));
}
*/
