/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coord.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 10:17:41 by marezgui          #+#    #+#             */
/*   Updated: 2017/12/07 17:24:44 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	int		**ft_alloc(void)
{
	int i;
	int **mat;

	i = 0;
	mat = (int**)malloc(sizeof(int*) * (g_nbr_t + 1));
	mat[g_nbr_t] = NULL;
	while (i < g_nbr_t)
	{
		mat[i] = (int*)malloc(sizeof(int) * 9);
		i++;
	}
	return (mat);
}

static	int		**ft_gps(char **tab)
{
	int **gps;
	int i[3];

	gps = ft_alloc();
	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	while (tab[i[0]])
	{
		while (tab[i[0]][i[1]])
		{
			if (tab[i[0]][i[1]] == '#')
			{
				gps[i[0]][i[2]] = i[1] % 5;
				gps[i[0]][i[2] + 1] = i[1] / 5;
				i[2] += 2;
			}
			i[1]++;
		}
		i[2] = 0;
		i[1] = 0;
		i[0]++;
	}
	return (gps);
}

static	int		ft_getmin(int *gps, int shift)
{
	int i[3];
	int tx[4];

	i[0] = 0;
	if (shift == 1)
		i[0] = 1;
	i[1] = 0;
	while (i[1] < 4)
	{
		tx[i[1]] = gps[i[0]];
		i[0] += 2;
		i[1]++;
	}
	i[1] = 0;
	while (i[1] < 3)
	{
		if (tx[i[1]] < tx[i[1] + 1])
		{
			i[2] = tx[i[1]];
			tx[i[1]] = tx[i[1] + 1];
			tx[i[1] + 1] = i[2];
		}
		i[1]++;
	}
	return (tx[3]);
}

static	void	ft_gpsbase(int **gps)
{
	int i;
	int j;
	int xbase;
	int ybase;

	i = 0;
	j = 0;
	xbase = 0;
	ybase = 0;
	while (i < g_nbr_t)
	{
		xbase = ft_getmin(gps[i], 2);
		ybase = ft_getmin(gps[i], 1);
		while (j < 8)
		{
			gps[i][j] -= xbase;
			gps[i][j + 1] -= ybase;
			j += 2;
		}
		gps[i][8] = i;
		j = 0;
		i++;
	}
}

int				**ft_getxy(char **tab)
{
	int **gps;

	gps = ft_gps(tab);
	ft_gpsbase(gps);
	return (gps);
}
