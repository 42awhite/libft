/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:47:12 by ablanco-          #+#    #+#             */
/*   Updated: 2022/09/23 13:34:19 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
		*lst = new;
	else
	{
		while ((*lst)-> next)
			*lst = (*lst)-> next;
		(*lst)-> next = new;
	}
}
/*
int	main(void)
{
	t_list	*node;
	t_list	*lst;

	lst = NULL;
	node = ft_lstnew("nodo nuevo");
	ft_lstadd_back(&lst, node);
	printf("%s\n", (char*)lst->content);
}
*/
