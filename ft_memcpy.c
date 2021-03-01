/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:42:11 by fbarros           #+#    #+#             */
/*   Updated: 2021/03/01 12:21:09 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;	
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
