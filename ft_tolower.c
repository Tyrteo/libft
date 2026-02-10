/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:02:15 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/10 20:10:36 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	return (c);
}
/* 
 #include <stdio.h>
#include <ctype.h>

int	main (void)
{
	char c1, c2, c3;
	c1 = 'a';
	c2 = 'B';
	c3 = '3';

	printf("c = a,    tolower returns %c \n", tolower(c1));
	printf("c = a, ft_tolower returns %c \n", ft_tolower(c1));
	printf("c = B,    tolower returns %c \n", tolower(c2));
	printf("c = B, ft_tolower returns %c \n", ft_tolower(c2));
	printf("c = 3,    tolower returns %c \n", tolower(c3));
	printf("c = 3, ft_tolower returns %c \n", ft_tolower(c3));
} */