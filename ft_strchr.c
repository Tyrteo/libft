/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:46:01 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/11 17:12:44 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			char_c;

	i = 0;
	char_c = (char) c;
	while (s[i])
	{
		if (s[i] == char_c)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == char_c)
		return ((char *) &s[i]);
	return (NULL);
}

// 28 Porque el el while no entra en la última posición y hay
// que comprobar si el char buscado es el '/0'

/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char cadena[] = "Imagina que tienes 2 vacas";
	char buscar = '2';
	char *resultado;

	resultado = ft_strchr(cadena, buscar);

	if (resultado != NULL)
		printf("Encontrado\n");
	else
		printf("No se encuentra %c en la cadena.\n", buscar);

	return (0);
} */