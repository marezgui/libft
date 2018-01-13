/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 19:13:55 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/25 14:57:25 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ptr;

	ptr = (char*)malloc((sizeof(char) * size) + 1);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size + 1);
	return (ptr);
}
