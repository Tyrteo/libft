/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:47:22 by martrod2          #+#    #+#             */
/*   Updated: 2026/01/24 22:27:53 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		if (c > 90 && c < 97)
			return (0);
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int testChar = 'm';

	printf("%d \n", ft_isalpha(testChar));
	printf("%d \n", isalpha(testChar));

	testChar = 'M';

	printf("%d \n", ft_isalpha(testChar));
	printf("%d \n", isalpha(testChar));

	testChar = '.';

	printf("%d \n", ft_isalpha(testChar));
	printf("%d \n", isalpha(testChar));

}
*/
