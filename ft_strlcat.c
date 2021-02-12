/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 14:35:31 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/12 16:31:55 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;

	i = strlen(dst);
	j = 0;
	while (size > 0)
	{
		while (i < (size - 1))
		{
			dst[i] = src[j++];
			i++;
		}
		dst[i] = '\0';
	}	
	return (strlen(src) + size);
}

int main()
{
	char a[10] = "abce";
	char *b = "fghi";

	printf("%s string length is %ld", a, ft_strlcat(a, b, sizeof(a)));
}
