/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 17:54:48 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/19 23:28:29 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0 || !big)
		return (NULL);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && (i + j) < len && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)(big + i));
			j++;
		}
		i++;
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