/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 11:13:28 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/25 14:58:04 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		len;
	int		end;
	char	*t;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	if (!s[start])
		return (ft_strnew(0));
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	len = (end - start) + 1;
	t = ft_strsub(s, start, len);
	if (!t)
		return (NULL);
	return (t);
}
