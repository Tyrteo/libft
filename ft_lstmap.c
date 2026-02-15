/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 13:47:00 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/15 14:17:52 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/* 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Función que duplica un string y lo pone en mayúsculas
void	*toupper_transformer(void *content)
{
	char	*str = strdup((char *)content);
	int		i = 0;

	if (!str)
		return (NULL);
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*orig = ft_lstnew(strdup("hurr"));
	ft_lstadd_back(&orig, ft_lstnew(strdup("durr")));

	t_list	*nueva = ft_lstmap(orig, toupper_transformer, del_content);

	t_list	*tmp = nueva;
	while (tmp)
	{
		printf("Nuevo nodo: %s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&orig, del_content);
	ft_lstclear(&nueva, del_content);
} */