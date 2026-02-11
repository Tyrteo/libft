/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 22:34:48 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/11 23:10:02 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/* 
#include <stdio.h>

int main(void)
{
	char test1[] = "ABCDE";
	char test2[] = "ABCXE";
	size_t n = 3; 

	int res = ft_memcmp(test1, test2, n);

	if (res == 0)
	{
		printf("Iguales\n");
	}
	else
	{
		printf("Diferentes\n");
		printf("Valor de retorno: %d\n", res);
	}
} */