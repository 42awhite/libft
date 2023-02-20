/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:55:49 by ablanco-          #+#    #+#             */
/*   Updated: 2022/11/21 17:15:58 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t cont, size_t size)
{
	void	*pnt;
	size_t	n;

	n = size * cont;
	if (n < size && n < cont)
		return (0);
	pnt = malloc(n);
	if (pnt == (void *)0)
		return (0);
	ft_bzero(pnt, n);
	return (pnt);
}
