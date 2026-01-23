/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 17:34:31 by martrod2          #+#    #+#             */
/*   Updated: 2026/01/23 18:25:44 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if(ft_isalpha(c)||ft_isdigit(c))
		return (1);
	return(0);
}

#include <stdio.h>

int	main(void)
{
	int testChar = 'a';

	printf("%d \n", ft_isalnum(testChar));

	testChar = '8';

	printf("%d \n", ft_isalnum(testChar));

	testChar = '.';

	printf("%d \n", ft_isalnum(testChar));
}
