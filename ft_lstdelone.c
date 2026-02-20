/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 23:54:54 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/20 18:13:26 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* void	string_cleaner(void *contenido)
{
	free(contenido);
}

#include <stdlib.h>

int	main(void)
{
	t_list *nodo;

	nodo = ft_lstnew(ft_strdup("It's been fun. Don't come back."));

	printf("%s\n", (char *)nodo->content);

	ft_lstdelone(nodo, string_cleaner);
} */