/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 19:01:53 by martrod2          #+#    #+#             */
/*   Updated: 2026/01/26 18:54:29 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft";

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char *testString = "string de prueba";

	printf("%ld", ft_strlen(testString));
}
*/
