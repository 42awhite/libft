/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:56:11 by ablanco-          #+#    #+#             */
/*   Updated: 2022/06/15 13:35:06 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
#include <ctype.h>
#include <unistd.h>
int main(void)
{
	if (isalnum('a') == ft_isalnum('a'))
		write(1, "OK\n", 3);
	if (isalnum('3') == ft_isalnum('3'))
		write(1, "OK\n", 3);
	if (isalnum(' ') == ft_isalnum(' '))
		write(1, "OK\n", 3);
}
*/
