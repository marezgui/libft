/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 21:24:31 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/25 14:56:36 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ptr;

	i = 0;
	if (!s)
		return (NULL);
	ptr = ft_strnew(ft_strlen(s));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(s[i]);
		i++;
	}
	return (ptr);
}
