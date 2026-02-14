/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 20:29:57 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/14 20:55:03 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nod;

	nod = (t_list *)malloc(sizeof(t_list));
	if (!nod)
		return (NULL);
	nod->content = content;
	nod->next = NULL;
	return (nod);
}
#include <stdio.h>

int	main(void)
{
	char	*cont = "contenido de prueba";
	t_list	*testnode;

	testnode = ft_lstnew(cont);

	printf("Contenido: %s\n", (char *)testnode->content);
	printf("Dir siguiente: %p\n", testnode->next);

	free(testnode);
}