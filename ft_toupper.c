/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 19:37:42 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/10 19:59:45 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>

int	main (void)
{
	char c1, c2, c3;
	c1 = 'a';
	c2 = 'B';
	c3 = '3';

	printf("c = a,    toupper returns %c \n", toupper(c1));
	printf("c = a, ft_toupper returns %c \n", ft_toupper(c1));
	printf("c = B,    toupper returns %c \n", toupper(c2));
	printf("c = B, ft_toupper returns %c \n", ft_toupper(c2));
	printf("c = 3,    toupper returns %c \n", toupper(c3));
	printf("c = 3, ft_toupper returns %c \n", ft_toupper(c3));
} */