/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:07:44 by fbarros           #+#    #+#             */
/*   Updated: 2021/03/11 19:17:12 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (!lst || !del)
		return ;
	tmp1 = *lst;
	while (tmp1 != NULL)
	{
		(*del)(tmp1->content);
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		free(tmp2);
	}
	free(tmp1);
	*lst = NULL;
}
