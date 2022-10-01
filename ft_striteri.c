/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:58:04 by ablanco-          #+#    #+#             */
/*   Updated: 2022/09/29 18:00:07 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*
void	ft_toupper_test(unsigned int pepe, char *c)
{
	while (c[pepe] >= 'a' && c[pepe] <= 'z')
		c[pepe] = c[pepe] - 32;
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	cont;

	cont = 0;
	if (s > 0)
	{
		while (s[cont])
		{
			f(cont, &s[cont]);
			cont++;
		}
	}
}
/*
int main (void)
{
	char algo[] = "hola que tal";
	
	printf("%s\n", ft_toupper_test(4, algo));
	//printf("%s\n", ft_strmapi(algo, ft_toupper_test));
	return (0);
}
*/
