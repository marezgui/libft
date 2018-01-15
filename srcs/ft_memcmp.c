/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 05:30:54 by marezgui          #+#    #+#             */
/*   Updated: 2018/01/13 22:44:13 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if (!n)
		return (0);
	while (i < n)
	{
		if (((unsigned char*)(uintptr_t)s1)[i]
				== ((unsigned char *)(uintptr_t)s2)[i])
			;
		else
		{
			return (((unsigned char*)(uintptr_t)s1)[i]
					- ((unsigned char*)(uintptr_t)s2)[i]);
		}
		i++;
	}
	i--;
	return (((unsigned char*)(uintptr_t)s1)[i]
			- ((unsigned char *)(uintptr_t)s2)[i]);
}
