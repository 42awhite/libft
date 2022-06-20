/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:56:11 by ablanco-          #+#    #+#             */
/*   Updated: 2022/06/15 13:35:06 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <unistd.h>
#include <ctype.h>
int	main(void)
{
	if (isprint('a') == ft_isprint('a'))
		write(1, "OK\n", 3);

	if (isprint('3') == ft_isprint('3'))
		write(1, "OK\n", 3);

	if (isprint(' ') == ft_isprint(' '))
		write(1, "OK\n", 3);
}
*/
