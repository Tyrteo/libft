/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 17:25:44 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/20 18:17:55 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/* #include <stdio.h>

int	main(void)
{
	char	*msg = "¿Hay alguien ahí?\n";
	char	*error = "Puedo escucharte\n";

	ft_putstr_fd(msg, 1);

	ft_putstr_fd(error, 2);
} */