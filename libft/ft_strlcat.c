/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 23:01:54 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/25 14:55:23 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int i;

	i = ft_strlen(dst);
	if (i + 1 > size)
		return (ft_strlen(src) + size);
	ft_strncat(dst, src, size - i - 1);
	return (ft_strlen(src) + i);
}
