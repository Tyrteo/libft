/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 12:29:34 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/14 13:25:40 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// calcula cuánto espacio necesito en string para ese número
static int	int_len(long longn)
{
	int	count;

	count = 0;
	if (longn < 0)
	{
		count++;
		longn = -longn;
	}
	if (longn == 0)
		count++;
	while (longn != 0)
	{
		longn /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*result;
	long	longn;

	longn = n;
	len = int_len(longn);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '0';
	if (longn < 0)
		longn = -longn;
	i = len -1;
	while (longn != 0)
	{
		result[i] = ((longn % 10) + 48);
		longn /= 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	result[len] = 0;
	return (result);
}
/* 
#include <stdio.h>

int main(void)
{
	int n = -2147483648; 

	char *resultado = ft_itoa(n);

	if (resultado)
	{
		printf("Número original: %d\n", n);
		printf("Resultado itoa:  [%s]\n", resultado);
		free(resultado);
	}
	else
		printf("No pudo reservar memoria\n");
}
 */