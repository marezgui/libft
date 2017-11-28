/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 12:10:05 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/25 14:41:29 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		nbr;
	int		i;
	char	temp;

	i = 0;
	nbr = 0;
	while (str[nbr] != '\0')
	{
		nbr += 1;
	}
	nbr--;
	while (i <= nbr)
	{
		temp = str[nbr];
		str[nbr] = str[i];
		str[i] = temp;
		i++;
		nbr--;
	}
	return (str);
}
