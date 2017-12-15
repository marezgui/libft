/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 12:48:57 by marezgui          #+#    #+#             */
/*   Updated: 2017/12/15 03:05:08 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	wchar_t unicode;

	unicode = 0;
	if ((c & 0xFF) <= 0x7F)
		write(fd, &c, 1);
	else if ((c & 0xFF) <= 0x7FF)
	{
		unicode = ((c & 0xbf) << 8) | (((c & 0xFF) >> 6) | 0xC0);
		write(fd, &unicode, 2);
	}
}
