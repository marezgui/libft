/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:36:49 by marezgui          #+#    #+#             */
/*   Updated: 2018/01/13 22:34:31 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			ptr = (char*)(uintptr_t)s;
			return (ptr + i);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		ptr = (char*)(uintptr_t)s;
		ptr += i;
	}
	return (ptr);
}
