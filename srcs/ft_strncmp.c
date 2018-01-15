/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:06:45 by marezgui          #+#    #+#             */
/*   Updated: 2018/01/13 22:45:09 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] == s2[i])
			;
		else
		{
			return (((unsigned char*)(uintptr_t)s1)[i]
					- ((unsigned char*)(uintptr_t)s2)[i]);
		}
		i++;
	}
	if (i == n)
		return (0);
	return (((unsigned char*)(uintptr_t)s1)[i]
			- ((unsigned char*)(uintptr_t)s2)[i]);
}
