/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:24:25 by marezgui          #+#    #+#             */
/*   Updated: 2018/01/13 22:35:44 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	void			*ptr;

	ptr = NULL;
	i = 0;
	while (i < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)(uintptr_t)src)[i];
		if (((unsigned char*)(uintptr_t)src)[i] == (unsigned char)c)
			return (ptr = (unsigned char*)dst + i + 1);
		i++;
	}
	return (ptr);
}
