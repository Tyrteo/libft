/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:14:08 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/13 13:53:18 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*jnt;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	jnt = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!jnt)
		return (NULL);
	while (s1[i])
		jnt[j++] = s1[i++];
	i = 0;
	while (s2[i])
		jnt[j++] = s2[i++];
	jnt[j] = 0;
	return (jnt);
}
/* 
#include <stdio.h>

int main(void)
{
	char *primera = "Ph'nglui mglw'nafh Cthulhu ";
	char *segunda = "R'lyeh wgah'nagl fhtagn";

	char *resultado = ft_strjoin(primera, segunda);

	if (resultado)
	{
		printf("S1: [%s]\n", primera);
		printf("S2: [%s]\n", segunda);
		printf("JOIN: [%s]\n", resultado);

		free(resultado);
	}
	else
		printf("Error al reservar memoria\n");
} */