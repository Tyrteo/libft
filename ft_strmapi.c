/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:55:59 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/14 16:36:11 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*res;

	len = ft_strlen(s);
	res = malloc ((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}
/*
// alterna mayúsculas y minúsculas
char	upper_lower(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z' && (i % 2 == 0))
		return (c - 32);
	return (c);
}

#include <stdio.h>

int	main(void)
{
	char *base = "prueba de puntero a funcion";
	char *nuevo;

	nuevo = ft_strmapi(base, upper_lower);
	if (nuevo)
	{
		printf("Original: %s\n", base);
		printf("Nuevo:    %s\n", nuevo);
		free(nuevo);
	}
	return (0);
} 
*/