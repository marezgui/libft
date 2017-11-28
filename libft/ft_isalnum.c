/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 22:52:13 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/14 22:59:08 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int isdigit;
	int isalpha;

	isdigit = ft_isdigit(c);
	isalpha = ft_isalpha(c);
	if (isdigit || isalpha)
		return (1);
	return (0);
}
