/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 08:16:14 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/25 14:49:07 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nb)
{
	int		len;
	char	*tab;
	int		u;

	len = (ft_intlen(nb) - 1);
	u = 0;
	if (!(tab = ft_strnew(len + 1)))
		return (NULL);
	if (nb == -INTMIN)
	{
		ft_strcpy(tab, "-2147483648");
		return (tab);
	}
	tab[0] = '0';
	if (nb < 0)
	{
		tab[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		tab[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (tab);
}
