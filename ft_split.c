/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 19:56:12 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/20 18:17:52 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *str, char c)
{
	int	amount;
	int	trigger;

	amount = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			amount++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (amount);
}

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	*fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

static char	**split_logic(char **res, const char *s, char c)
{
	size_t	i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0 && s[i])
			start = i;
		else if ((s[i] == c || s[i] == '\0') && start >= 0)
		{
			res[j] = fill_word(s, start, i);
			if (!res[j++])
				return (ft_free(res, j - 1));
			start = -1;
		}
		i++;
	}
	return (res);
}

char	**ft_split(const char *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = ft_calloc(word_count(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	return (split_logic(res, s, c));
}

/* 
#include <stdio.h>

int	main(void)
{
	char	**res;
	int		i;

	char *str = "   No   me atormentes más   ";
	char c = ' ';

	printf("Original: [%s] | Separador: '%c'\n", str, c);
	res = ft_split(str, c);

	if (!res)
	{
		printf("NULL\n");
		return (1);
	}

	i = 0;
	while (res[i])
	{
		printf("Palabra %d: [%s]\n", i, res[i]);
		free(res[i]);
		i++;
	}
	free(res);
} */
