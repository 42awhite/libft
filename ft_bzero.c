/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:23:28 by ablanco-          #+#    #+#             */
/*   Updated: 2022/06/22 16:49:00 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_bzero(void *s, size_t n)
{
	size_t	q;
	char	*str;

	str = s;
	q = 0;
	while (q < n)
	{
		str[q] = '\0';
		q++;
	}
	return (str);
}
/*
#include <string.h>
#include <stdio.h>

int	main (void)
{
	char	str[] = "hola caracola";

	printf("%s", ft_bzero(str, 4));
}
*/