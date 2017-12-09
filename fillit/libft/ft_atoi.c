/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 23:26:48 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/25 14:59:35 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int flag;
	int result;

	i = 0;
	flag = 1;
	result = 0;
	while (str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12
			|| str[i] == 13 || str[i] == 32)
		i++;
	if (str[i] == '-')
		flag *= -1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (result * flag);
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * flag);
}
