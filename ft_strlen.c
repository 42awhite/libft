/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:56:11 by ablanco-          #+#    #+#             */
/*   Updated: 2022/06/15 13:35:06 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int c;
	
	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

/*
#include <unistd.h>
#include <string.h>
int	main(void)
{
	if (strlen("hola") == ft_strlen("hola"))
		write(1, "OK\n", 3);

	if (strlen("12345") == ft_strlen("12345"))
		write(1, "OK\n", 3);
}
*/
