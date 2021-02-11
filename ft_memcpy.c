/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:42:11 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/11 22:39:56 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*s = &src;

	while (n > 0)
	{
		n--;
		*dest++ = s++;
		//dest++;
		//src++;
	}

	return (dest);
}

int main()
{
	char a[] = "abcdef";
	char *b = a + 1;

	memcpy(b, a, 5);
	printf("%s", a);

/*char *a = "abcdef";
 * char *b = a + 1;
 * memmove(b, a, 5); // a will be "aabcde"
 * memcpy(b, a, 5); // a will be "aaaaaa";*/
}
