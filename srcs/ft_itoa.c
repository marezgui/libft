/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marezgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 08:16:14 by marezgui          #+#    #+#             */
/*   Updated: 2018/11/12 18:28:42 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_itoa(int nb)
{
	size_t	u;
	int		len;
	char	*tab;

	len = ft_intlen(nb);
	u = 0;
	if (!(tab = ft_strnew((size_t)len)))
		return (NULL);
	if (nb == INT_MIN)
		return (ft_strcpy(tab, "-2147483648"));
	tab[0] = '0';
	if (nb < 0)
	{
		tab[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		tab[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (tab);
}
