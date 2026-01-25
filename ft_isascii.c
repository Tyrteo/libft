/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 15:38:15 by martrod2          #+#    #+#             */
/*   Updated: 2026/01/25 16:29:03 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	testChar = 'a';

	printf("%d \n", ft_isascii(testChar));
	printf("%d \n", isascii(testChar));

	testChar = '.';

	printf("%d \n", ft_isascii(testChar));
	printf("%d \n", isascii(testChar));

	testChar = -3;

	printf("%d \n", ft_isascii(testChar));
	printf("%d \n", isascii(testChar));

	testChar = 999;

	printf("%d \n", ft_isascii(testChar));
	printf("%d \n", isascii(testChar));
}
*/
