/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:51:06 by fbarros           #+#    #+#             */
/*   Updated: 2021/03/01 16:13:04 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < (size - 1))
	{
		dst[size] = src[size];
		if ((src + i) == NULL)
			break ;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main()
{
	char str1[10] = "abcf";
//	char str2[10] = "ghild";

	printf("%s source length = %d", str1, strlcpy(str1, str1[2], 3));
}*/
