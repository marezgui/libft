/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 08:16:14 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/21 08:45:42 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		nb = -nb;
	}
/*
** INT MAX = 2147483647
*/
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
	}
/*
** Table ASCII 0-9 -> 48-57
*/
	else if (nb >= 0 && nb <= 9)
		ft_putchar('0' + nb);
/*
** '/'to print only the unit '%'to print only the decade
*/
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
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
