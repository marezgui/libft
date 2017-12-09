/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 08:16:14 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/21 08:49:58 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
/*
** INT MAX = 2147483647
*/
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
/*
** Table ASCII 0-9 -> 48-57
*/
	else if (nb >= 0 && nb <= 9)
		ft_putchar_fd('0' + nb, fd);
/*
** '/'to print only the unit '%'to print only the decade
*/
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
/*
**int	main(void)
**{
**	int i = 42;
**	ft_putnbr(i);
**	return (0);
**}
*/
