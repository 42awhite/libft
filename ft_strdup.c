/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:43:01 by ablanco-          #+#    #+#             */
/*   Updated: 2022/08/19 17:58:40 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdlib.h"

char *ft_strdup(const char *s1)
{
	size_t lon;
	char *cpy;
	int cont;

	lon = ft_strlen(s1);
	cpy = malloc(sizeof(char) * (lon + 1));
	if (!cpy)
		return(0);
	cont = 0;
	while (s1[cont])
	{
		cpy[cont] = s1[cont];
		cont ++;
	}
	cpy[cont] = '\0';
	return (cpy);
}
