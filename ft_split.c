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


static int ft_nchar(char *s1)
{
	size_t lenght;
	int cont;
	
	cont = 0;
	length = 0;
	while (s1[cont] != '\0')
		{
			length ++;
			cont ++;
		}
	return (lenght);
}

char **ft_split(char const *s, char c)
{

}
