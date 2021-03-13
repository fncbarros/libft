/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:07:44 by fbarros           #+#    #+#             */
/*   Updated: 2021/03/13 16:52:43 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *lst;
	while (tmp1 != NULL)
	{
		tmp2 = tmp1;
		del(tmp1->content);
		tmp1 = tmp1->next;
//		free(tmp2);
	}
	free(tmp1);		//double free...
	*lst = NULL;
}
