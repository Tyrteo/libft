/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 17:54:48 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/12 18:43:49 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == 0)
		return ((char *) big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && big[i + j] && (i + j) < len)
		{
			j++;
			if (little[j] == 0)
				return ((char *) big + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}

/* #include <stdio.h>

int main(void)
{
	char *donde = "Ph'nglui mglw'nafh Cthulhu R'lyeh wgah'nagl fhtagn";
	char *buscar = "Cthulhu";
	size_t l = 50; 
	char *resultado = ft_strnstr(donde, buscar, l);

	if (resultado)
		printf("Encontrado\n");
	else
		printf("No encontrado\n");
} */