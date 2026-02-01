/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:46:59 by martrod2          #+#    #+#             */
/*   Updated: 2026/01/28 18:05:17 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst2nd;
	unsigned char	*src2nd;
	size_t			i;

	dst2nd = (unsigned char *)dst;
	src2nd = (unsigned char *)src;
	i = 0;
	while (n > i)
	{
		dst2nd[i] = src2nd[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	target1[11] = "oooooooooo";
	char	target2[11] = "oooooooooo";
	char	mySource[11] = "xxxxxxxxxx";

	printf("target1 = %s\n", target1);
	memcpy(target2, mySource, 5);
	ft_memcpy(target1, mySource, 5);
	printf("target1 (after ft_memcpy) = %s\n", target1);
	printf("target2 (after ft_memcpy) = %s\n", target2);
}
		*/
