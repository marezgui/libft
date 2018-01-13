/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 05:20:29 by marezgui          #+#    #+#             */
/*   Updated: 2018/01/13 22:41:20 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	void			*ptr;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)(uintptr_t)s)[i] == (unsigned char)c)
			return (ptr = (unsigned char*)(uintptr_t)s + i);
		i++;
	}
	return (NULL);
}
