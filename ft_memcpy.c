/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:42:11 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/12 18:03:09 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *s;	
	unsigned char *d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n--)
	{
		*d++ = *s++;
	}

	return (dest);
}

int main()
{
	char a[] = "abcdef";
	char *b = a + 1;

	ft_memcpy(b, a, 5);
	printf("%s", a);

/*char *a = "abcdef";
 * char *b = a + 1;
 * memmove(b, a, 5); // a will be "aabcde"
 * memcpy(b, a, 5); // a will be "aaaaaa";*/
}
