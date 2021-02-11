/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 12:33:43 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/11 18:35:46 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include<stdio.h>
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	r;
	int	i;

	n /= sizeof(s1[0]);
	i = 0;
	while (i < n)
	{
		printf("round %d\n", i);
		r = (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		if (r < 0 || r > 0)
			return (r);
		i++;
	}
	return (i);
}

int main()
{
	
	int i = 5;
	char arr1[] = "Hallo";
	char arr2[] = "Halla";
	
	printf("ft_memcmp = %d\n", ft_memcmp(arr1, arr2, i * sizeof(char)));
	printf("memcmp difference = %d\n", memcmp(arr1, arr2, i * sizeof(char)));
}
