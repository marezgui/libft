/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:50:09 by marezgui          #+#    #+#             */
/*   Updated: 2017/11/24 05:43:56 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *link;
	t_list *ptr;

	if (!f || !lst)
		return (NULL);
	link = f(lst);
	ptr = link;
	lst = lst->next;
	while (lst)
	{
		ptr->next = f(lst);
		lst = lst->next;
		ptr = ptr->next;
	}
	return (link);
}
