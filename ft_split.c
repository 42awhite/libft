/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:52:41 by ablanco-          #+#    #+#             */
/*   Updated: 2022/09/29 18:28:47 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static size_t	ft_nword(const char *s1, char c)
{
	size_t	cont;
	size_t	nw;

	nw = 0;
	cont = 0;
	while (s1 && s1[cont])
	{
		if (s1[cont] != c)
		{		
			nw++;
			while (s1[cont] != c && s1[cont])
				cont++;
		}
		else
		cont++;
	}
	return (nw);
}

static size_t	ft_nchar(const char *s2, char c, int i)
{
	size_t	cont;

	cont = 0;
	while (s2[i] != '\0' && s2[i] != c)
	{
		cont++;
		i++;
	}
	return (cont);
}

static void	ft_free(char **split, int cont)
{
	while (cont >= 0)
		free(split[cont--]);
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	cont;
	size_t	co;
	size_t	q;

	split = malloc(sizeof (char *) * (ft_nword(s, c) + 1));
	cont = 0;
	q = 0;
	if (!split)
		return (NULL);
	while (cont < ft_nword(s, c))
	{	
		while (s[q] == c)
			q++;
		co = ft_nchar(s, c, q);
		split[cont] = ft_substr(s, q, co);
		if (split[cont] == NULL)
			ft_free(split, cont);
		q += co;
		cont++;
	}
	split[cont] = NULL;
	return (split);
}

/*
int main(void)
{
	char s1[] = "   hol que    tal         me muero";
	char c = ' ';
	char **co;
	int cont;

	co = ft_split(s1, c);
	cont = 0;
	while (co[cont] != NULL)
	{
		printf ("|%s|\n", co[cont]);
		cont++;
	}
//	printf ("%s\n", NULL);
//	cont = 0;
//	while (ft_nword(s1, c) >= cont)
//	{
//		printf ("|%s|\n", co[cont]);
//		cont++;
//	}
}
*/
