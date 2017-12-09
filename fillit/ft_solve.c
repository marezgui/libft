/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 15:02:04 by souakrim          #+#    #+#             */
/*   Updated: 2017/12/07 21:58:54 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	int			ft_isempty(char **map, int *gps, int x, int y)
{
	int i;

	i = 0;
	if ((map[y + gps[1]][x + gps[0]] == '.')
		&& (map[y + gps[3]][x + gps[2]] == '.')
		&& (map[y + gps[5]][x + gps[4]] == '.')
		&& (map[y + gps[7]][x + gps[6]] == '.'))
		i = 1;
	return (i);
}

static	int			ft_place(char **map, int *gps, int x, int y)
{
	int	len;

	len = ft_strlen(map[0]);
	if (x + gps[6] >= len || y + gps[7] >= len)
		return (0);
	if (ft_isempty(map, gps, x, y))
	{
		map[y + gps[1]][x + gps[0]] = gps[8] + 'A';
		map[y + gps[3]][x + gps[2]] = gps[8] + 'A';
		map[y + gps[5]][x + gps[4]] = gps[8] + 'A';
		map[y + gps[7]][x + gps[6]] = gps[8] + 'A';
		return (1);
	}
	else
		return (0);
}

static	void		ft_delete_t(char **map, int *gps)
{
	int		x;
	int		y;
	char	c;

	x = 0;
	y = 0;
	c = gps[8] + 'A';
	while (map[y])
	{
		while (map[y][x])
		{
			if (map[y][x] == c)
				map[y][x] = '.';
			x++;
		}
		x = 0;
		y++;
	}
}

static int			ft_backtrack(char **map, int **gps, int t)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (t == g_nbr_t)
		return (1);
	while (map[y] != NULL)
	{
		if (ft_place(map, gps[t], x, y) == 1)
		{
			if (ft_backtrack(map, gps, t + 1))
				return (1);
			ft_delete_t(map, gps[t]);
		}
		x++;
		if (map[y][x] == '\0')
		{
			x = 0;
			y++;
		}
	}
	return (0);
}

char				**ft_solve(char **tab)
{
	int		**gps;
	char	**map;
	int		ok;

	gps = ft_getxy(tab);
	map = ft_createmap();
	ok = 0;
	while (ok != 1)
	{
		ok = ft_backtrack(map, gps, 0);
		if (ok == 0)
			ft_resizemap(map);
	}
	return (map);
}
