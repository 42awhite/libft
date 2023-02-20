/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:30:25 by ablanco-          #+#    #+#             */
/*   Updated: 2022/11/24 17:03:10 by ablanco-         ###   ########.fr       */
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
	char *src = "there is so a ver ajajajja";
	char *d2 = ft_strchr(src, 's');
	printf("%s \n", d2);

	return (0);
}
*/
