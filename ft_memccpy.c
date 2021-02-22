/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 23:44:10 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/22 18:45:10 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"
//ft_memchr with ft_memcpy
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n-- && n < sizeof(src))
	{
		if (*s == c)
		{
			*d++ = *s++;
			return (*d + 1);
		}
		*d++ = *s++;
	}
	return (NULL);
}

int main()
{
	char arr1[] = "abcd";
	char arr2[10];
	char *p;
	p = ft_memccpy(arr2, arr1, 'c', 5);
	printf("dest = %s source = %s\ndest 4th char %04x return pointer address --> %04x", arr1, arr2, &arr2[4], *p);
}
