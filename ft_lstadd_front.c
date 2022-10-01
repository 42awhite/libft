/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:34:09 by ablanco-          #+#    #+#             */
/*   Updated: 2022/09/29 18:32:42 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst && !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int	main(void)
{
	t_list	*node;
	t_list	*lst;

	node = ft_lstnew("hola");
	ft_lstadd_front(&lst, node);
	printf("%s\n", (char *)lst->content);
	node = ft_lstnew("antes de hola");
	ft_lstadd_front(&lst, node);
	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);
}
*/
