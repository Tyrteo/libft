/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:17:51 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/15 17:04:32 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			char_c;
	char			*last_position_found;

	i = 0;
	char_c = (char) c;
	last_position_found = NULL;
	while (s[i])
	{
		if (s[i] == char_c)
			last_position_found = (char *) &s[i];
		i++;
	}
	if (s[i] == char_c)
		last_position_found = (char *) &s[i];
	return (last_position_found);
}
/* 
// 30 Porque el el while no entra en la última posición y hay
// que comprobar si el char buscado es el '/0'

#include <stdio.h>
#include <string.h>

int main(void)
{
	char cadena[] = "Imagina que tienes 2 vacas";
	char buscar = '2';
	char *resultado;

	resultado = ft_strrchr(cadena, buscar);

	if (resultado != NULL)
		printf("Encontrado\n");
	else
		printf("No se encuentra %c en la cadena.\n", buscar);
} */