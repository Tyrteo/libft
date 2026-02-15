/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:43:25 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/15 18:19:20 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tsrc;
	char	*tdst;
	size_t	i;

	if (!dest && !src)
		return (dest);
	tsrc = (char *)src;
	tdst = (char *)dest;
	i = 0;
	if (tdst > tsrc)
	{
		while (n-- > 0)
			tdst[n] = tsrc[n];
	}
	else
	{
		while (i < n)
		{
			tdst[i] = tsrc[i];
			i++;
		}
	}
	return (dest);
}
/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	test_char[11] = "0123456789";
	char	test_char2[11] = "0123456789";
	printf("    test string = %s\n", test_char);
	memmove(&test_char[0], &test_char[5], 7);
	printf("   memcopy test = %s\n", test_char);
	ft_memmove(&test_char2[0], &test_char2[5], 7);
	printf("ft_memcopy test = %s\n", test_char);
	
} */