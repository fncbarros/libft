/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <fbarros@student.42lisboa.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 14:16:58 by fbarros           #+#    #+#             */
/*   Updated: 2021/03/10 15:20:55 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	**newroot;

	new = NULL;
	newroot = NULL;
	while (lst && *f && del)
	{
		new = ft_lstnew(f(lst->content));
		if (!newroot)
			*newroot = new;
		if (!new)
		{
			ft_lstclear(newroot, del);
			return (NULL);
		}
		ft_lstadd_back(newroot, new);
		lst = lst->next;
	}
	return (new);
}
