/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 21:38:54 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/14 22:00:10 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
#include <stdio.h>

int main(void)
{
	t_list	*comienzo = NULL;
	t_list	*n1;
	t_list	*n2;

	n1 = ft_lstnew("N1");
	ft_lstadd_front(&comienzo, n1);

	n2 = ft_lstnew("N2");
	ft_lstadd_front(&comienzo, n2);

	printf("Primero en la lista: %s\n", (char *)comienzo->content);
	printf("Siguiente: %s\n", (char *)comienzo->next->content);

	free(n1);
	free(n2);
}