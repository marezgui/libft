/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 19:13:55 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/25 14:51:19 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ptr;

	ptr = (unsigned char*)malloc(sizeof(size_t) * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, '\0', size);
	return (ptr);
}
