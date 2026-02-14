/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 23:54:54 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/15 00:19:59 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

// *del no es más que el puntero a una función de limpieza que recibe 
// un puntero y no devuelve nada. Hay que implementarla dependiendo del
// contenido de lst. En el ejemplo uso palabras, entonces free()

void	string_cleaner(void *contenido)
{
	free(contenido);
}
/* 
#include <stdlib.h>

int	main(void)
{
	t_list *nodo;

	nodo = ft_lstnew(ft_strdup("It's been fun. Don't come back."));

	printf("%s\n", (char *)nodo->content);

	ft_lstdelone(nodo, string_cleaner);
} */