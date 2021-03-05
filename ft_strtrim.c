/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:23:47 by fbarros           #+#    #+#             */
/*   Updated: 2021/03/05 23:23:18 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*s2;

	start = 0;
	while (*s1 && ft_strchr(set, s1[start]) != NULL)
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	len = (end - start) + 2;
	if (end <= start)
		len = 1;
	s2 = (char *)malloc(len);
	if (!s2)
		return (NULL);
	len = 0;
	while (start <= end)
		s2[len++] = s1[start++];
	s2[len] = '\0';
	return (s2);
}
