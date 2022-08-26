/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:52:41 by ablanco-          #+#    #+#             */
/*   Updated: 2022/08/26 17:32:46 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int ft_nword(const char *s1, char c)
{
	size_t cont;
	size_t ns;
	
	ns = 0;
	cont = 0;
	while(s1[cont] != '\0')
		{
			if (s1[cont] != c)
				cont++;
			else if (s1[cont + 1] == c || s1[cont + 1] == '\0')
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

static int ft_nchar(const char *s2, char c)
{
	size_t cont;

	cont = 0;
	while (s2[cont] != '\0')
		cont++;
	return (cont);
}

char **ft_split(char const *s, char c)
{
char **split;
int	 nw;
size_t cont;
size_t co;

nw = ft_nword(s, c);
split = malloc(sizeof (char *) * (nw + 1));

cont = 0;
while (cont <= nw)
{
	split[cont] = malloc(sizeof (char) * (ft_nchar(s, c) + 1));
	co = 0;
	while (s[co] != c)
	{
		split[cont][co] = s[co];
		co++;
	}
	cont++;
}
return (split);
}

int main(void)
{
	char s1[] = "hol que    tal         me muero  ";
	char c = ' ';
	char **co;
	int cont;

	co = ft_split(s1, c);
	cont = 0;
	while (ft_nword(s1, c) >= cont)
	{
		printf ("%s\n", co[cont]);
		cont++;
	}
}
