/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:08:23 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/15 18:54:33 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
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