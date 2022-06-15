/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:56:11 by ablanco-          #+#    #+#             */
/*   Updated: 2022/06/15 13:35:06 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z'))
		return(1);
	else
		return(0);
}

#include <ctype.h>
int main(void)
{
	if (isalpha('a') == ft_isalpha('a'))
		write(1, "OK\n", 3);
	if (isalpha('3') == ft_isalpha('3'))
		write(1, "OK\n", 3);
	if (isalpha(' ') == ft_isalpha(' '))
		write(1, "OK\n", 3);
}
