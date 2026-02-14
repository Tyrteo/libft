/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 16:43:50 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/14 16:57:21 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_stiteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/* #include <stdio.h>

void	caesar_upper(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		if (i % 2 == 0)
			*c = *c + 1;
		else
			*c = *c - 32;
	}
}

int	main(void)
{
	// ATENSIÓN: No podemos usar char *s = "hola", porque eso es una constante
	// y daría un error al intentar modificarlo. Usamos un array de char [].
	char s[] = "abcdefghijk";

	printf("Antes de stiteri:   %s\n", s);

	ft_stiteri(s, caesar_upper);

	printf("Después de stiteri: %s\n", s);

	return (0);
} */