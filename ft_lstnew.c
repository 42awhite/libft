/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:59:58 by ablanco-          #+#    #+#             */
/*   Updated: 2022/09/29 18:31:51 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mem;

	mem = (t_list *)malloc(sizeof (t_list));
	if (!mem)
		return (NULL);
	mem->content = content;
	mem->next = NULL;
	return (mem);
}

/*
int	main(void)
{
	t_list	*node;

	node = ft_lstnew("hola");
	printf("%s", (char *)node->content);
}
*/
