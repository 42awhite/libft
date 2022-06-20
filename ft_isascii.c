/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:56:11 by ablanco-          #+#    #+#             */
/*   Updated: 2022/06/15 13:35:06 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <unistd.h>
int main(void)
{
	if (isascii('a') == ft_isascii('a'))
		write(1, "OK\n", 3);
	if (isascii('3') == ft_isascii('3'))
		write(1, "OK\n", 3);
	if (isascii(' ') == ft_isascii(' '))
		write(1, "OK\n", 3);
}
*/
