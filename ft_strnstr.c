/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 15:41:30 by ablanco-          #+#    #+#             */
/*   Updated: 2022/10/01 18:40:28 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cont;
	size_t	q;

	if (!haystack && !len)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	cont = 0;
	while (haystack[cont])
	{
		q = 0;
		while (haystack[cont + q] && needle[q]
			&& haystack[cont + q] == needle[q] && cont + q < len)
			q++;
		if (!needle[q])
			return (&((char *)haystack)[cont]);
		cont++;
	}
	return (0);
}
/*
int main(void)
{
	char str[] = "pican pican los mosquitos";
	char str1[] = "los";

	printf("%s\n", ft_strnstr(str, str1, 25));
//	printf("%s\n", strnstr(str, str1, 25));
}
*/
