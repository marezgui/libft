/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:05:14 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/25 14:57:32 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	y;
	char	*ptr;

	i = 0;
	y = 0;
	ptr = NULL;
	while (haystack[i])
	{
		while ((haystack[i + y] == needle[y]) && (i + y) < len)
		{
			if (++y == ft_strlen(needle))
			{
				ptr = (char*)haystack;
				return (ptr + i);
			}
		}
		y = 0;
		i++;
	}
	if (!ft_strlen(needle))
		ptr = (char*)haystack;
	return (ptr);
}
