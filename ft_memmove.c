/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:05:45 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/21 15:05:53 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	*buf;

	i = 0;
	buf = (unsigned char*)malloc(sizeof(unsigned char) * len);
	if (!buf)
		return (dst);
	ft_memcpy(buf, src, len);
	ft_memcpy(dst, buf, len);
	free(buf);
	return (dst);
}
