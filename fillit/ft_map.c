/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 10:41:28 by souakrim          #+#    #+#             */
/*   Updated: 2017/12/07 18:56:11 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_getsizemap(void)
{
	int nb;
	int size;

	nb = g_nbr_t * 4;
	size = 1;
	while (size * size < nb)
		size++;
	return (size);
}

void			ft_resizemap(char **map)
{
	int		i;
	int		len;
	int		lentab;
	char	*new;
	char	*tmp;

	i = 0;
	len = ft_strlen(map[0]);
	new = ft_strnew(len + 1);
	lentab = 0;
	while (map[lentab])
		lentab++;
	while (i < lentab)
	{
		tmp = ft_strnew(len + 1);
		ft_memcpy(tmp, map[i], len);
		free(map[i]);
		map[i] = tmp;
		ft_strcat(map[i], ".");
		i++;
	}
	ft_memset(new, '.', len + 1);
	map[lentab] = new;
	map[lentab + 1] = NULL;
}

char			**ft_createmap(void)
{
	int		i;
	int		j;
	char	**map;
	int		size;

	size = ft_getsizemap();
	i = 0;
	j = 0;
	map = ft_memalloc(sizeof(char *) * (size + 1));
	while (j < size)
	{
		map[j] = ft_strnew(size);
		j++;
	}
	j = 0;
	while (i < size)
	{
		while (j < size)
			map[i][j++] = '.';
		map[i][j] = '\0';
		j = 0;
		i++;
	}
	map[i] = NULL;
	return (map);
}
