/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:02:05 by ablanco-          #+#    #+#             */
/*   Updated: 2022/09/29 13:14:08 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_poschar(char c, char const *set)
{
	size_t	q;

	q = 0;
	while (set[q])
	{
		if (set[q] == c)
			return (1);
		q++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	cont;

	if (!s1)
		return (0);
	start = 0;
	while (s1[start] && ft_poschar(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_poschar(s1[end - 1], set))
		end--;
	str = malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (0);
	cont = 0;
	while (start < end)
	{
		str[cont] = s1[start];
		cont ++;
		start ++;
	}
	str[cont] = '\0';
	return (str);
}

/*
int main(void)
{
	char s1[] = "aaaaaaaaaataaaaaaaa";
	char set[] = "a";

	printf("%s", ft_strtrim(s1, set));
	return (0);
}
*/
