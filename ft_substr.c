/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:06:05 by ablanco-          #+#    #+#             */
/*   Updated: 2022/09/22 17:35:37 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdlib.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	c;
	size_t	cont;

	if (!s)
		return (0);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	c = 0;
	cont = 0;
	while (s[c])
	{
		if (c >= start && cont < len)
		{
			str[cont] = s[c];
			cont++;
		}
	c++;
	}
	str[cont] = '\0';
	return (str);
}
