/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <fbarros@student.42lisboa.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:31:19 by fbarros           #+#    #+#             */
/*   Updated: 2021/03/08 16:21:21 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static char		**ft_error(char **arr)
{
	unsigned int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
	return (NULL);
}

static size_t	ft_strnum(char const *s, char c, size_t sn)
{
	unsigned int	i;

	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		sn++;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (sn);
}

static size_t	ft_nxt_strlen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	sn;
	size_t	len;
	char	**arr;

	if (s[0] != 0)
		sn = 1;
	if (c != 0)
		sn = ft_strnum(s, c, 0); //will fucking segfault if c == 0; 
	arr = (char **)malloc(sizeof(char *) * (sn + 1)); //if c == 0 and *s is true you still need sn to be 1
	if (!arr)
		return (NULL);
	len = 0;
	j = 0;
	i = 0;
	while (i < sn && s[j])
	{
		j += len;
		while (s[j] && s[j] == c)
			j++;
		len = ft_nxt_strlen(&s[j], c);
		arr[i] = ft_substr(s, j, len);
		if (arr[i++] == NULL)
			return (ft_error(arr));
	}
	arr[i] = NULL;
	return (arr);
}
