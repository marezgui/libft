/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:36:49 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/25 14:57:41 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	int		len;

	ptr = NULL;
	len = ft_strlen(s);
	i = len - 1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			ptr = (char*)s;
			return (ptr + i);
		}
		i--;
	}
	if ((char)c == '\0')
	{
		ptr = (char*)s;
		ptr += len;
	}
	return (ptr);
}
