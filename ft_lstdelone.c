/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 11:02:02 by fbarros           #+#    #+#             */
/*   Updated: 2021/03/06 14:11:08 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//frees memory in lst.content through del(void *) using free;  next not to be mess with
		   //element to free,  address to ft that deletes content
		   //
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{

	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst->content);
	if (lst->next != NULL);
		lst->next = NULL;
}
