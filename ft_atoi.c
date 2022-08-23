/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 12:41:51 by ablanco-          #+#    #+#             */
/*   Updated: 2022/08/23 16:44:18 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	c;
	int	neg;
	long	dest;

	c = 0;
	neg = 1;
	dest = 0;

	while ((str[c] == ' ') || (str[c] >= 9 && str[c] <= 13))
	{
		c++;
	}
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
		neg = neg * -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		dest = (str[c] - '0') + (dest * 10);
		c ++;
	}
	if (dest > INT_MAX && neg == 1)
		return (-1);
	else if (dest < INT_MIN && neg == -1)
		return (0); 
	return (dest * neg);
	
}
/*
int main(void)
{
	char nom[] = "-+646461254865";
	
	printf("%d\n", ft_atoi(nom));
	printf("%d\n", atoi(nom));


}
*/
