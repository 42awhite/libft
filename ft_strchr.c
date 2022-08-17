/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:30:25 by ablanco-          #+#    #+#             */
/*   Updated: 2022/07/15 13:42:21 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	cont;

	cont = 0;
	while (s[cont] != '\0')
	{
		if (s[cont] == (char) c)
			return ((char *)&s[cont]);
		cont++;
	}
	if ((char)c == '\0')
		return ((char *)&s[cont]);
	return (NULL);
}

/*
int main (void)
{
	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char *d1 = strchr(src, '\0');
	char *d2 = ft_strchr(src, '\0');
	printf("%p %p\n", d1, d2);
	if (d1 == d2)
		printf("TEST_SUCCESS");
	else
		printf("TEST_FAILED");
	return (0);
}
*/
