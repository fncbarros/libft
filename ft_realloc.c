/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:41:28 by fbarros           #+#    #+#             */
/*   Updated: 2021/08/20 15:21:25 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *p, size_t size)
/* Does not handle error management, this must be done by user
 * If size == 0, p is freed and 1 byte of memory is allocated 
 * instead of "minimum sized object" and set to zero
 * p is lost in this version of alloc*/
{
	void	*tmp;

	if (!p)
		return (malloc(size));
	if (!size)
	{
		free(p);
		return (ft_calloc(1, 1));
	}
	tmp = ft_calloc(1, size);
	if (!tmp)
		return (NULL);
	ft_memcpy(tmp, p, sizeof(p) + 1);
	free(p);
	p = NULL;
	p = tmp;
	return (p);
}
