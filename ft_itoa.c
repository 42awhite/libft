/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:29:28 by ablanco-          #+#    #+#             */
/*   Updated: 2022/09/11 20:55:10 by ablanco-         ###   ########.fr       */
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
	while (n >= 9)
	{
		n /= 10;
		cont ++;
	}
	return (cont);
}

/*
char *ft_itoa(int n)
{
	char number;
	
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n <= 9)
	{
		number = n + 48;
		write(1, &number, 1);
	}
	if (n >= 10)
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	return (&number);
}
*/

int	main(void)
{
	printf("%d\n", ft_nchar(125));
	printf("%d\n", ft_nchar(0));
}
