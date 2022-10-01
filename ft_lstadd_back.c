/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:47:12 by ablanco-          #+#    #+#             */
/*   Updated: 2022/09/29 18:46:28 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*recive;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	recive = ft_lstlast(*lst);
	recive->next = new;
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
