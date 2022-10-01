/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:29:28 by ablanco-          #+#    #+#             */
/*   Updated: 2022/09/29 17:19:58 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static size_t	ft_nchar(long int n)
{
	int	cont;

	cont = 1;
	if (n < 0 && n != -2147483648)
	{
		n *= -1;
		cont++;
	}
	while (n >= 10 && n != -2147483648)
	{
		n /= 10;
		cont ++;
	}
	if (n == -2147483648)
		cont = 11;
	return (cont);
}

char	*ft_itoa(int n)
{
	char		*itoa;
	int			nchar;
	long int	number;
	long int	number_cpy;

	number = n;
	nchar = ft_nchar(n);
	itoa = ft_calloc(sizeof(char), nchar + 1);
	if (!itoa)
		return (NULL);
	if (number < 0)
		number *= -1;
	number_cpy = number;
	while (nchar > 0)
	{
		number = number_cpy % 10 + 48;
		number_cpy /= 10;
		nchar--;
		itoa[nchar] = number;
	}
	if (n < 0)
		itoa[0] = '-';
	return (itoa);
}

/*
int	main(void)
{
	printf("%s\n", ft_itoa(156825));
//	printf("%s\n", itoa(125));
}
*/
