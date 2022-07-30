/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 12:41:51 by ablanco-          #+#    #+#             */
/*   Updated: 2022/07/30 14:17:35 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	c;
	int	neg;
	int	dest;

	c = 0;
	neg = 1;
	dest = 0;

//	if (!str)
	//	return (0);

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
	return (dest * neg);
}
