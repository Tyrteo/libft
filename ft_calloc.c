/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 20:43:46 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/20 18:08:10 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = malloc(count * size);
	if (!temp)
		return (NULL);
	while (i < count * size)
		temp[i++] = 0;
	return (temp);
}
/* 
#include <stdio.h>

int	main(void)
{
	size_t	numero_elementos = 5;
	size_t	tamano = sizeof(int); 
	size_t	i = 0;

	int *array = (int *)ft_calloc(numero_elementos, tamano);

	if (array == NULL)
	{
		printf("No se pudo reservar memoria\n");
		return (1);
	}

	printf("Memoria reservada. Contenido:\n");
	while (i < numero_elementos)
	{
		printf("Posición [%zu]: %d\n", i, array[i]);
		i++;
	}

	free(array);
	printf("\nMemoria liberada\n");
} */