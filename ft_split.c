/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:08:40 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/17 16:04:42 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "stdlib.h"
#include <string.h>

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char 	*s2;
	int		i;

	arr = (char **)malloc(sizeof(s) + 2);
	if (!arr)
		return (NULL);
	i = 0;
	while (s[i] != c && *s)
	{
		arr[0][i] = s[i];
		i++;
	}
	arr[0][i] = '\0';
	s2 = strchr(s, c);
	i = 0;
	while (s2[i] != '\0')
	{
		arr[1][i] = s2[i];
		i++;
	}
   arr[1][i] = '\0';
	return (arr);
}

int main()
{
	char **c = ft_split("abcddcba", 'd');
	printf("%s.%s\n", c[0], c[1]);
}
