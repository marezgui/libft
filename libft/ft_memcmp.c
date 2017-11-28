/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 05:30:54 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/25 14:52:02 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if (!n)
		return (0);
	while (i < n)
	{
		if (((unsigned char*)s1)[i] == ((unsigned char *)s2)[i])
			;
		else
			return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
		i++;
	}
	i--;
	return (((unsigned char*)s1)[i] - ((unsigned char *)s2)[i]);
}
