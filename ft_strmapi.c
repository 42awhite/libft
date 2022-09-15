/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:47:48 by ablanco-          #+#    #+#             */
/*   Updated: 2022/09/15 14:47:02 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	ft_toupper_test(unsigned int pepe, char c)
{
	(void) pepe;
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	cont;
	char			*punt;

	punt = ft_calloc(1, sizeof(char) * (ft_strlen(s) + 1));
	
	cont = 0;
	if (!punt || !s || !f)
		return (NULL);
	while(s[cont])
	{
		punt[cont] = f(cont, s[cont]);
		cont++;
	}
	return (punt);
}
/*
int main (void)
{
	char algo[] = "hola que tal";

	printf("%s\n", ft_strmapi(algo, ft_toupper_test));
}
*/
