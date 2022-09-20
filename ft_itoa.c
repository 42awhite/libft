/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:29:28 by ablanco-          #+#    #+#             */
/*   Updated: 2022/09/20 16:51:34 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int ft_nchar(int n)
{
	int cont;
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

char *ft_itoa(int n)
{
	char		*itoa;
	int 		nchar;
	long int	number;
	long int	number_cpy;

	nchar = ft_nchar(n);
	itoa = malloc(sizeof(char) * (nchar + 1));
	if (!itoa)
		return (0);
		
	if (n == -2147483648)
	{
		ft_strlcpy(itoa, "-2147483648", nchar + 1);
		return (itoa);
	}

	if (n < 0)
		number = -n;
	else
		number = n;
	number_cpy = number;
	itoa[nchar] = '\0';
	while (nchar >= 0)
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
	printf("%s\n", ft_itoa(-125));
	printf("%s\n", ft_itoa(0));
}
*/
