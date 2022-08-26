/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:52:41 by ablanco-          #+#    #+#             */
/*   Updated: 2022/08/23 16:54:55 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

static int ft_nstr(char *s1, char c)
{
	size_t cont;
	size_t ns;
	
	ns = 0;
	cont = 0;
	while(s1[cont] != '\0')
		{
			if (s1[cont] != c)
				cont++;
			else
			{
				ns++;
				cont++;
			}
		}
	ns++;
	return(ns);
}

int main(void)
{
	char s1[] = "hola que tal";
	char c = ' ';

	printf ("%d\n", ft_nstr(s1, c));
}

/*
static int ft_nchar(char *s2)
{
	size_t lenght;
	int cont;
	
	cont = 0;
	length = 0;
	while (s2[cont] != '\0')
		{
			length ++;
			cont ++;
		}
	return (lenght);
}

char **ft_split(char const *s, char c)
{

}
*/
