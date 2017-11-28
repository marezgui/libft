/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:36:49 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/21 14:58:47 by marezgui         ###   ########.fr       */
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
			ptr = (char*)s;
			return (ptr + i);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		ptr = (char*)s;
		ptr += i;
	}
	return (ptr);
}
