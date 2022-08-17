/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:27:19 by ablanco-          #+#    #+#             */
/*   Updated: 2022/07/18 18:21:38 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	cont;

	cont = 0;
	while (s[cont])
		cont++;
	while (cont >= 0)
	{
		if (s[cont] == (char) c)
			return ((char *)&s[cont]);
		cont--;
	}
	return (NULL);
}

/*
int main (void)
{
	char src[] = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char *d1 = strrchr(src, '\0');
	char *d2 = ft_strrchr(src, '\0');
	printf("%p %p\n", d1, d2);
	if (d1 == d2)
		printf("TEST_SUCCESS");
	else
		printf("TEST_FAILED");
	return (0);
}
*/
