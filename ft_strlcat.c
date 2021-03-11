/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 14:35:31 by fbarros           #+#    #+#             */
/*   Updated: 2021/03/10 20:39:33 by fbarros          ###   ########.fr       */
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
	while (size >= d && src[s])
		dst[d++] = src[s++];
	while (size > d && dst[d])
		dst[d++] = '\0';
	if (size != 0 && d > sizeof(dst))
		dst[d] = '\0';
	return (r);
}
#include <stdio.h>
#include <string.h>
int main()
{
	//malloc for buffer
	char *str = "AB";
	char *buff = "CDEFGHI";
	size_t size = ft_strlcat(buff, str, 10);
	printf("%ld\t%s\n%ld\n", size,  buff, sizeof(buff));
}
