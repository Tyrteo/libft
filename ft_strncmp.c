/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:32:35 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/15 18:34:15 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int main(void)
{
	char *str1 = "Hola";
	char *str2 = "Holo";
	size_t n = 4;
	int res;

	res = ft_strncmp(str1, str2, n);

	if (res == 0)
		printf("Resultado: Son iguales en los primeros %zu caracteres.\n", n);
	else if (res > 0)
		printf("Resultado: El primer string es MAYOR (valor: %d)\n", res);
	else
		printf("Resultado: El segundo string es MAYOR (valor: %d)\n", res);
} */