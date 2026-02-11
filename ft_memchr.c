/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:23:42 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/11 18:47:27 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cc;
	size_t			i;

	str = (unsigned char *) s;
	cc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == cc)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char datos[] = {10, 20, 30, 42, 50};
	size_t n = 5;
	int buscar = 43;
	void *resultado;

	printf("Busca byte %d en primeros %zu bytes\n", buscar, n);

	resultado = ft_memchr(datos, buscar, n);

	if (resultado != NULL)
		printf("Encontrado %d\n", *(unsigned char *)resultado);
	else
		printf("No encontrado\n");

	return (0);
} */