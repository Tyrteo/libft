/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:01:31 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/15 17:03:27 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_length;
	size_t	dst_length;

	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	if (dst_length > dstsize)
		dst_length = dstsize;
	if (dst_length == dstsize)
		return (dstsize + src_length);
	if (src_length < dstsize - dst_length)
		ft_memcpy(dst + dst_length, src, src_length + 1);
	else
	{
		ft_memcpy(dst + dst_length, src, dstsize - dst_length - 1);
		dst[dstsize - 1] = 0;
	}
	return (dst_length + src_length);
}
// 24 si el tamaño del objetivo es el mismo (o mayor) no habría que añadir nada
// porque ya tiene el número máximo de caracteres. return interrumpe

// 27 ahora sí, si hay suficiente sitio en dst para que src quepa, añadimos
// 28 con +N incremento la posición de inicio de lectura y escritura

// Cómo testeo esto sin malloc?

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