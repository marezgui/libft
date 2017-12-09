/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:07:44 by souakrim          #+#    #+#             */
/*   Updated: 2017/12/09 12:18:47 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	void	ft_fill_tab(char **tab, char *buffer)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (j < g_nbr_t)
	{
		tab[j] = ft_strnew(20);
		while (k < 20)
		{
			tab[j][k] = buffer[i];
			k++;
			i++;
		}
		k = 0;
		j++;
		i++;
	}
	tab[j] = NULL;
}

static	int		ft_nbr_t(char *str)
{
	int idx;

	idx = 0;
	g_nbr_t = 0;
	while (str[idx])
	{
		if (str[idx] == '\n' && (str[idx + 1] == '\n' || str[idx + 1] == '\0'))
			g_nbr_t++;
		idx++;
	}
	return (g_nbr_t);
}

char			**ft_read(char *argv)
{
	char	buffer[BUFF_SIZE + 1];
	char	**tmp;
	int		fd;
	int		ret;

	ret = 1;
	if ((fd = open(argv, O_RDONLY)) == -1)
		return (NULL);
	if ((ret = read(fd, buffer, BUFF_SIZE)) != 0)
		buffer[ret] = '\0';
	g_nbr_t = ft_nbr_t(buffer);
	tmp = (char **)malloc(sizeof(char *) * g_nbr_t + 1);
	if (!tmp)
		return (NULL);
	if (!ft_checkfile(buffer))
	{
		return (NULL);
	}
	ft_fill_tab(tmp, buffer);
	return (tmp);
}
