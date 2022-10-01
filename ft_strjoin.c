/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:20:16 by ablanco-          #+#    #+#             */
/*   Updated: 2022/10/01 18:34:13 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdlib.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	c;
	size_t	cont;

	if (!s1)
		return (0);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	c = 0;
	cont = 0;
	while (s1[c])
	{
		str[cont] = s1[c];
		cont++;
		c++;
	}
	c = 0;
	while (s2[c])
		str[cont++] = s2[c++];
	str[cont] = '\0';
	return (str);
}
