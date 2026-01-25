/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 17:39:34 by martrod2          #+#    #+#             */
/*   Updated: 2026/01/25 18:20:47 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	testChar = ' ';

	printf("%d \n", ft_isprint(testChar));
	printf("%d \n", isprint(testChar));

	testChar = '~';

	printf("%d \n", ft_isprint(testChar));
	printf("%d \n", isprint(testChar));

	testChar = 31;

	printf("%d \n", ft_isprint(testChar));
	printf("%d \n", isprint(testChar));

	testChar = 127;

	printf("%d \n", ft_isprint(testChar));
	printf("%d \n", isprint(testChar));
}
*/
