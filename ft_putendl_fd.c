/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrod2 <martrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 17:51:17 by martrod2          #+#    #+#             */
/*   Updated: 2026/02/14 18:02:02 by martrod2         ###   ########.fr       */
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
	ft_putendl_fd("Hello and, again, welcome to the Aperture Science computer-aided enrichment center.", 1);
	ft_putendl_fd("We hope your brief detention in the relaxation vault has been a pleasant one.", 1);
	return (0);
} */