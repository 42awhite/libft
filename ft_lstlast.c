/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:37:48 by ablanco-          #+#    #+#             */
/*   Updated: 2022/09/29 18:44:51 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst-> next;
	return (lst);
}
/*
int	main (void)
{
	t_list	*node;
	t_list	*node2;
	t_list	*last;

	node = ft_lstnew("primer nodo");
	node2 = ft_lstnew("segundo nodo");
	ft_lstadd_front(&node, node2);
	last = ft_lstlast(node);
	printf("%s\n", (char *)ft_lstlast(node)->content);
	printf("%s\n", (char *)last->content);
	ft_lstlast(last->next);
}
*/
