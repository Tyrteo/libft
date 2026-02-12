/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 22:53:46 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/12 23:38:30 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(start + s))
		len = ft_strlen(start + s);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/* 
#include <stdio.h>

int main(void)
{
	char *frase = "0123456789";
	unsigned int inicio = 3;
	size_t longitud = 4;

	char *sub = ft_substr(frase, inicio, longitud);

	printf("Frase original: %s\n", frase);

	if (sub)
	{
		printf("Resultado: [%s]\n", sub);
		free(sub); 
	}
	else
		printf("NULL\n");
} */