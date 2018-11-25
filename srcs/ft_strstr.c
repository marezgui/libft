/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marezgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:22:12 by marezgui          #+#    #+#             */
/*   Updated: 2018/11/11 07:56:38 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	len;
	char	*ptr;

	i = 0;
	len = ft_strlen(needle);
	ptr = NULL;
	while (haystack[i])
	{
		if (!ft_strncmp(haystack + i, needle, len))
			return (ptr = (char*)(uintptr_t)haystack + i);
		i++;
	}
	if (!len)
		ptr = (char*)(uintptr_t)haystack;
	return (ptr);
}
