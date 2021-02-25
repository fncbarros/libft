/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:23:47 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/25 18:58:16 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	len;
	int	start;
	int	end;

	start = 0;
	while (*s1 && ft_strchr(set, s1[start]) != NULL)
		start++;
	end = ft_strlen(s1) - 1;
	while (*s1 && ft_strchr(set, s1[end]) != NULL)
		end--;
	len = (end - start) + 2;
	s2 = (char *)malloc(len); 
	if (!s2)
		return (NULL);
	len = 0;
	while (start <= end)
	{
		s2[len++] = s1[start++];
	}
	s2[len] = '\0';
	return (s2);
}

int main()
{
	char *c = ft_strtrim("(! armando(/", "!(/");
	printf("%s", c);
}
