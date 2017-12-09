/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 10:05:10 by marezgui          #+#    #+#             */
/*   Updated: 2017/12/09 12:21:24 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	int	ft_checkchar(char *str)
{
	int idx;
	int hash;
	int dot;
	int ndl;

	idx = 0;
	hash = 0;
	dot = 0;
	ndl = 0;
	while (str[idx])
	{
		if (str[idx] == '#')
			hash++;
		if (str[idx] == '.')
			dot++;
		if (str[idx] == '\n')
			ndl++;
		if (str[idx] != '#' && str[idx] != '.' && str[idx] != '\n')
			return (0);
		idx++;
	}
	if (hash != 4 || dot != 12 || ndl != 4)
		return (0);
	return (1);
}

static	int	ft_checktetri(char *str)
{
	int idx;
	int link;

	idx = 0;
	link = 0;
	while (str[idx])
	{
		if (str[idx] == '#' && str[idx + 1] == '#')
			link++;
		if (str[idx] == '#' && str[idx - 1] == '#' && idx > 0)
			link++;
		if (str[idx] == '#' && str[idx + 5] == '#')
			link++;
		if (str[idx] == '#' && str[idx - 5] == '#' && idx > 4)
			link++;
		if (str[idx] == '\n' && str[idx + 1] == '\n' && link < 6)
			return (0);
		idx++;
	}
	if (link < 6)
		return (0);
	return (1);
}

int			ft_checktab(char **str)
{
	int idx;

	idx = 0;
	while (str[idx])
	{
		if (!ft_checkchar(str[idx]))
			return (0);
		if (!ft_checktetri(str[idx]))
			return (0);
		idx++;
	}
	return (1);
}
