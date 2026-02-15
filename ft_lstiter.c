/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 13:19:48 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/15 13:39:11 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
/* #include <stdio.h>

void	contenido_vagon(void *content)
{
	printf("Contenido del vagón: %s\n", (char *)content);
}

int	main(void)
{
	t_list	*lista = NULL;

	ft_lstadd_back(&lista, ft_lstnew("Manzana"));
	ft_lstadd_back(&lista, ft_lstnew("Plátano"));
	ft_lstadd_back(&lista, ft_lstnew("Kiwi"));

	ft_lstiter(lista, contenido_vagon);
} */