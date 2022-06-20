/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:56:11 by ablanco-          #+#    #+#             */
/*   Updated: 2022/06/15 13:35:06 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
#include <unistd.h>
#include <ctype.h>
int main(void)
{
	if (isdigit('a') == ft_isdigit('a'))
		write(1, "OK\n", 3);
	if (isdigit('3') == ft_isdigit('3'))
		write(1, "OK\n", 3);
	if (isdigit(' ') == ft_isdigit(' '))
		write(1, "OK\n", 3);
}
*/
