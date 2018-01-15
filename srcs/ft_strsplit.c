/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 12:11:33 by marezgui          #+#    #+#             */
/*   Updated: 2018/01/13 03:31:29 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static	size_t	ft_cntwd(const char *s, char c)
{
	int		i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			cnt++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cnt);
}

static	size_t	ft_wdlen(const char *s, char c)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		len++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(*tab) * (ft_cntwd(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (i < (int)ft_cntwd(s, c))
	{
		k = 0;
		tab[i] = ft_strnew(ft_wdlen(&s[j], c));
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			tab[i][k++] = s[j++];
		i++;
	}
	tab[i] = 0;
	return (tab);
}
