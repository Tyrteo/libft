/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:19:22 by martrod2          #+#    #+#             */
/*   Updated: 2026/01/28 17:18:46 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *)s;
	while (i < n)
	{
		s2[i] = (unsigned char)0;
		i++;
	}
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char frase[] = "0123456789";
	char frase2[] = "0123456789";
	size_t iteraciones = 2;

	printf("%s\n", frase);
	bzero(frase, iteraciones);
	ft_bzero(frase2, iteraciones);
	printf("%s\n", frase);
	printf("%s\n", frase2);
} */