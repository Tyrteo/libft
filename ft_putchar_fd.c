/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 17:07:52 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/14 17:17:06 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
	// 1. Escribir en la pantalla normal (fd 1)
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);

	// 2. Escribir en la salida de errores (fd 2)
	ft_putchar_fd('!', 2);
	ft_putchar_fd('\n', 2);

	// 3. Escribir en un archivo, pero no sé. fcntl.h?
}