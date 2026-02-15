/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:23:07 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/15 13:15:03 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del || !*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst= NULL;
}
/* 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Función de limpieza con aviso
void	del_test(void *content)
{
	printf("Borrando contenido: %s\n", (char *)content);
	free(content);
}

int	main(void)
{
	t_list	*lista = NULL;

	ft_lstadd_back(&lista, ft_lstnew(strdup("Nodo 1")));
	ft_lstadd_back(&lista, ft_lstnew(strdup("Nodo 2")));
	ft_lstadd_back(&lista, ft_lstnew(strdup("Nodo 3")));

	ft_lstclear(&lista, del_test);

	if (lista == NULL)
		printf("Lista borrada y puntero puesto a NULL\n");
	else
		printf("El puntero de la lista no es NULL\n");
} */