/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:55:31 by ablanco-          #+#    #+#             */
/*   Updated: 2022/09/29 18:51:33 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ejemplo(void *c)
{
	//printf("%s\n", (char*)c);
	c = "ANA";
	//printf("%s\n", (char*)c);
}
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;
	t_list	*nxt;

	if (!del || !lst)
		return ;
	aux = *lst;
	while (aux)
	{
		nxt = aux -> next;
		del(aux -> content);
		free(aux);
		aux = nxt;
	}
	*lst = NULL;
}

/*
int	main(void)
{
	t_list	*lst;
	t_list	*node;
	
	lst = NULL;
	node = ft_lstnew("nodo nuevo");
	node->next = NULL;
	ft_lstadd_front(&lst, node);
	ft_lstclear(&lst, ejemplo);
}
*/
