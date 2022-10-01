/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:47:48 by ablanco-          #+#    #+#             */
/*   Updated: 2022/09/29 17:55:37 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
/*
char	ft_toupper_test(unsigned int pepe, char c)
{
	(void) pepe;
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	cont;
	char			*punt;

	if (!s || !f)
		return (NULL);
	punt = ft_calloc(1, sizeof(char) * (ft_strlen(s) + 1));
	if (!punt)
		return (NULL);
	cont = 0;
	while (s[cont])
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
