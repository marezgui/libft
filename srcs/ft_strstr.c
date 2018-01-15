/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:22:12 by marezgui          #+#    #+#             */
/*   Updated: 2018/01/13 22:24:08 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	y;
	char	*ptr;

	i = 0;
	y = 0;
	ptr = NULL;
	while (haystack[i])
	{
		while (haystack[i + y] == needle[y])
		{
			if (++y == ft_strlen(needle))
				return (ptr = (char*)(uintptr_t)haystack + i);
		}
		y = 0;
		i++;
	}
	if (!ft_strlen(needle))
		ptr = (char*)(uintptr_t)haystack;
	return (ptr);
}
