/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 14:35:31 by fbarros           #+#    #+#             */
/*   Updated: 2021/03/01 16:12:14 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	r;
	unsigned int	d;
	unsigned int	s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (size <= d)
		r = s + size;
	else
		r = s + d;
	dst += d;
	while (size > (d + 1) && *src != '\0')
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (r);
}
