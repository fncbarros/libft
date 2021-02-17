/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:50:56 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/16 18:28:59 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	//nmemb * size == memory needed to be allocated (?)
	//but can't just malloc nmmeb * size all together...
	

	void	*p;

	p = malloc(nmemb * size);
	if (p == NULL)
		return (1);
	ft_bzero(p, nmemb);
	return (p);

	// something is missing...
}
