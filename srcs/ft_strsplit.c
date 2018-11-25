/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marezgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 12:11:33 by marezgui          #+#    #+#             */
/*   Updated: 2018/11/12 18:26:35 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static	size_t	ft_wdlen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static	size_t	ft_cntwd(const char *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			cnt++;
		i += ft_wdlen(s + i, c);
	}
	return (cnt);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t			i;
	unsigned int	j;
	size_t			wdlen;
	size_t			wd;
	char			**tab;

	if (!s)
		return (NULL);
	wd = ft_cntwd(s, c);
	if (!(tab = (char **)malloc(sizeof(*tab) * (wd + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < wd)
	{
		while (s[j] == c)
			j++;
		wdlen = ft_wdlen(s + j, c);
		tab[i++] = ft_strsub(s, j, wdlen);
		j += wdlen;
	}
	tab[i] = 0;
	return (tab);
}
