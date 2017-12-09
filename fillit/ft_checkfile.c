/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 22:01:03 by souakrim          #+#    #+#             */
/*   Updated: 2017/12/08 16:19:33 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	int	ft_checkline(char *str)
{
	int idx;
	int count;
	int next;
	int len;

	idx = 4;
	count = 0;
	next = 4;
	len = 0;
	while (str[idx] && len++ < 21)
	{
		if (str[idx] == '#' || str[idx] == '.')
			count++;
		if (count > 4)
			return (0);
		if (str[idx] == '\n' && idx == next)
		{
			count = 0;
			next = next + 5;
		}
		idx++;
	}
	return (1);
}

static	int	ft_splittest(char *str)
{
	int idx;

	idx = 0;
	while (str[idx])
	{
		if (!ft_checkline(str + idx))
			return (0);
		idx += 21;
	}
	return (1);
}

int			ft_checkfile(char *str)
{
	int	idx;
	int	count_n;
	int t;

	t = g_nbr_t;
	idx = 0;
	count_n = 0;
	if (!ft_splittest(str))
		return (0);
	while (str[idx])
	{
		if (str[idx] == '\n')
			count_n++;
		if (count_n == 4)
		{
			if (str[idx + 1] != '\n' && str[idx + 1] != '\0')
				return (0);
			idx += (str[idx + 1] == '\n') ? 1 : 0;
			count_n = 0;
		}
		idx++;
	}
	if (idx != (t * 21) - 1)
		return (0);
	return (1);
}
