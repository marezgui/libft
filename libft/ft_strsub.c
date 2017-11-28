/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 10:11:00 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/25 14:57:56 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*t;

	i = 0;
	if (!s)
		return (NULL);
	t = ft_strnew(len);
	if (!t)
		return (NULL);
	while (s[start] && len)
	{
		t[i] = s[start];
		start++;
		len--;
		i++;
	}
	return (t);
}
