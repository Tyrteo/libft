/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:48:34 by martrod2          #+#    #+#             */
/*   Updated: 2026/01/21 20:14:22 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char testChar = '8';
	printf("%i \n", ft_isdigit(testChar));
	testChar = 'J';
	printf("%i \n", ft_isdigit(testChar));
}
*/
