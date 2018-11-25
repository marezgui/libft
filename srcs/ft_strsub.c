/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marezgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 10:11:00 by marezgui          #+#    #+#             */
/*   Updated: 2018/11/12 16:50:38 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*t;

	if (!s)
		return (NULL);
	t = ft_strnew(len);
	if (!t)
		return (NULL);
	i = 0;
	while (len--)
		t[i++] = s[start++];
	return (t);
}
