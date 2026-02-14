/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 23:25:31 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/14 23:46:05 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/* 
#include <stdio.h>

int	main(void)
{
t_list	*comienzo = NULL;

	ft_lstadd_back(&comienzo, ft_lstnew("1"));
	ft_lstadd_back(&comienzo, ft_lstnew("2"));
	ft_lstadd_back(&comienzo, ft_lstnew("3"));

	t_list *aux = comienzo;
	printf("Lista en orden:\n");
	while (aux)
	{
		printf("- %s\n", (char *)aux->content);
		aux = aux->next;
	}
} */