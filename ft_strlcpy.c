/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:08:23 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/10 17:24:47 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_length;

	src_length = ft_strlen(src);
	if (src_length +1 < dstsize)
		ft_memcpy(dst, src, src_length + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, src_length - 1);
		dst[dstsize - 1] = 0;
	}
	return (src_length);
}


/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	test_char1[11] = "0123456789";
	char	test_char2[11] = "0123456789";
	char	test_char3[6] = "01234";
	char	test_char4[6] = "01234";

	printf("test string = %s\n", test_char1);

	strlcpy(test_char3, test_char1+1, 6);
	printf("   strlcpy test = %s\n", test_char3);

	ft_strlcpy(test_char4, test_char1+1, 6);
	printf("ft_strlcpy test = %s\n", test_char4);

} */