/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 11:02:02 by fbarros           #+#    #+#             */
/*   Updated: 2021/03/06 18:56:57 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{

	if (!lst || !del)
		return ;
	printf("%s\n", lst->content);
	(*del)(lst->content);
	free(lst->content);
	lst->next = NULL;
}
