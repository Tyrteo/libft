/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 21:20:54 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/12 21:39:18 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *) malloc(ft_strlen(s1) + 1);
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char *original = "I'm still standing! Yeah, yeah, yeah!";

	char *copia = ft_strdup(original);

	if (copia == NULL)
	{
		printf("Error al reservar memoria.\n");
		return (1);
	}

	printf("Original: %s (Dirección: %p)\n", original, (void *)original);
	printf("Copia:    %s (Dirección: %p)\n", copia, (void *)copia);

	free(copia);
} */