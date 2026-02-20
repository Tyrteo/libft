/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:01:31 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/20 18:19:20 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	if (dstsize == 0 && !dst)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	i = dst_len;
	j = 0;
	while (src[j] && (i + 1) < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
	// 1. Caso normal: Hay espacio suficiente
	char dest1[20] = "Hola";
	char *src1 = " Mundo";
	size_t res1 = ft_strlcat(dest1, src1, 20);
	printf("Test 1 - Buffer grande:\n Result: %zu, Dest: %s\n\n", res1, dest1);

	// 2. Caso de truncado: El buffer es pequeño
	char dest2[10] = "Hola";
	char *src2 = " Estudiante de 42";
	size_t res2 = ft_strlcat(dest2, src2, 10);
	printf("Test 2 - Truncado:\n Result: %zu, Dest: %s\n\n", res2, dest2);

	// 3. Caso límite: dstsize es igual a la longitud de dst
	char dest3[10] = "Hola";
	size_t res3 = ft_strlcat(dest3, "...", 4);
	printf("Test dstsize = strlen(dst):\n Result: %zu, Dest: %s\n", res3, dest3);

	return 0;
} */