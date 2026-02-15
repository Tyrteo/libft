/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 17:51:17 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/15 17:01:45 by martrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/* 
int	main(void)
{
	ft_putendl_fd("Hello and, again, welcome to the Aperture Science", 1);
	ft_putendl_fd("We hope your brief detention in the relaxation vault", 1);
	return (0);
} */