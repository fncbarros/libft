/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 14:35:31 by fbarros           #+#    #+#             */
/*   Updated: 2021/03/06 18:20:50 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	r;
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (size > d)
		r = d + s;
	else
		r = size + s;
	s = 0;
	while (size > (d + 1) && src[s] != '\0')
		dst[d++] = src[s++];
	if (size != 0 && d > sizeof(dst))
		dst[d] = '\0';
	return (r);
}
