/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 12:44:46 by marezgui          #+#    #+#             */
/*   Updated: 2017/12/15 03:04:32 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** UTF-8 is a specific scheme for mapping a sequence of 1-4 bytes
** to a number from 0x000000 to 0x10FFFF:
** 00000000 -- 0000007F:	0xxxxxxx			[OK]
** 00000080 -- 000007FF:	110xxxxx 10xxxxxx	[OK]
** 00000800 -- 0000FFFF:	1110xxxx 10xxxxxx 10xxxxxx
** 00010000 -- 001FFFFF:	11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
** It can represent all 1,114,112 Unicode characters.
** UTF-8 is fully compatible with 7-bit ASCII
*/

#include "../includes/libft.h"

void	ft_putchar(char c)
{
	wchar_t unicode;

	unicode = 0;
	if ((c & 0xFF) <= 0x7F)
		write(1, &c, 1);
	else if ((c & 0xFF) <= 0x7FF)
	{
		unicode = ((c & 0xbf) << 8) | (((c & 0xFF) >> 6) | 0xC0);
		write(1, &unicode, 2);
	}
}
/*
**int	main()
**{
**	//char c = 'o';
**	int c = L'ø';
**
**	ft_putchar(c);
**	return (0);
**}
*/
