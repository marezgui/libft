/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:37:56 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/30 15:21:51 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 1;
	if (nb < 0)
		nb *= -1;
	while (sqrt * sqrt != nb)
	{
		if (nb < sqrt * sqrt)
			return (0);
		sqrt++;
	}
	return (sqrt);
}
