/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:11:57 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/14 22:25:34 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
/* 
#include <stdio.h>

int main(void)
{
	t_list	*mi_lista = NULL;
	int		tamano;

	tamano = ft_lstsize(mi_lista);
	printf("Tamaño lista vacía: %d\n", tamano);

	ft_lstadd_front(&mi_lista, ft_lstnew("Primer nodo"));
	printf("Tamaño con 1 nodo:  %d\n", ft_lstsize(mi_lista));

	ft_lstadd_front(&mi_lista, ft_lstnew("Segundo nodo"));
	ft_lstadd_front(&mi_lista, ft_lstnew("Tercer nodo"));

	tamano = ft_lstsize(mi_lista);
	printf("Tamaño con 3 nodos: %d\n", tamano);

	//falta liberar los nodos
} */