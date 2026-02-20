/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:48:34 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/20 18:10:06 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char testChar = '8';

	printf("%d \n", ft_isdigit(testChar));
	printf("%d \n", isdigit(testChar));

	testChar = 'J';
	printf("%d \n", ft_isdigit(testChar));
	printf("%d \n", isdigit(testChar));
}
*/
