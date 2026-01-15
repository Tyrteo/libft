/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 19:01:42 by martrod2          #+#    #+#             */
/*   Updated: 2026/01/15 19:41:35 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_islower(char c)
{
	if (c>=97 && c <=122)
		return (1);
	else
		return (0);
}

int	main(void)
{
	int a = 'L';

	printf("%i", ft_islower(a));
}
