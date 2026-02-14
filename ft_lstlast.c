/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:31:13 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/14 22:42:23 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
/* 
#include <stdio.h>

int	main(void)
{
	t_list	*comienzo = NULL;
	t_list	*ultimo;

	ft_lstadd_front(&comienzo, ft_lstnew("n1"));
	ft_lstadd_front(&comienzo, ft_lstnew("n2"));
	ft_lstadd_front(&comienzo, ft_lstnew("n3"));

	ultimo = ft_lstlast(comienzo);

	if (ultimo)
		printf("contenido del último nodo : %s\n", (char *)ultimo->content);
	else
		printf("lista vacía?\n");
} */