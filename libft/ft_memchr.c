/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 05:20:29 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/25 14:51:51 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	void			*ptr;

	i = 0;
	ptr = (unsigned char*)s;
	while (i < n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
