/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:14:20 by martrod2          #+#    #+#             */
/*   Updated: 2026/01/26 20:12:57 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int i;
	
	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

#include <stdio.h>
#include <stddef.h>

int	main(void)
{
	char *aquiMismo;
	int contenido = 42;
	size_t longitud = 10;

	//cómo invoco una función que empieza por dereferencia
	printf("%s", ft_memset(aquimismo, contenido, longitud));
}
