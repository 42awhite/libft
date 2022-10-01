/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:34:40 by ablanco-          #+#    #+#             */
/*   Updated: 2022/09/29 18:35:39 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cont;

	cont = 0;
	while (lst != '\0')
	{
		lst = lst->next;
		cont++;
	}
	return (cont);
}
/*
int main (void)
{
	t_list *node;
	t_list *node2;


	node = ft_lstnew("hola");
	node2 = ft_lstnew("segundo nodo");
	ft_lstadd_front(&node, node2);
	printf("%d\n", ft_lstsize(node));
}
*/
