/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:14:20 by martrod2          #+#    #+#             */
/*   Updated: 2026/01/28 13:19:35 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *)s;
	while (i < n)
	{
		s2[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* #include <stdio.h>
#include <string.h>
#include <stddef.h>

int	main(void)
{
	char aquiMismo[] = "0123456789";
	char aquiMismo2[] = "0123456789";
	int contenido = '*';
	size_t longitud = 8;

	printf("%s\n", aquiMismo);
	memset(aquiMismo, contenido, longitud);
	printf("%s\n", aquiMismo);
	ft_memset(aquiMismo2, contenido, longitud);
	printf("%s\n", aquiMismo2);
} */