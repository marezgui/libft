/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 18:24:36 by marezgui          #+#    #+#             */
/*   Updated: 2017/12/08 17:22:59 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	void	ft_printmap(char **map)
{
	int y;

	y = 0;
	while (map[y])
	{
		ft_putstr(map[y]);
		ft_putchar('\n');
		y++;
	}
}

int				main(int argc, char **argv)
{
	int		i;
	char	**tab;

	i = 0;
	if (argc != 2)
	{
		ft_putendl("usage: ./fillit [file]");
		return (0);
	}
	tab = ft_read(argv[1]);
	if (!tab)
	{
		ft_putendl("error");
		return (0);
	}
	if (!ft_checktab(tab))
	{
		ft_putendl("error");
		return (0);
	}
	ft_solve(tab);
	ft_printmap(ft_solve(tab));
	return (0);
}
