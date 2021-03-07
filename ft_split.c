/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:08:40 by fbarros           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/03/05 19:03:50 by fbarros          ###   ########.fr       */
=======
/*   Updated: 2021/03/06 18:23:51 by fbarros          ###   ########.fr       */
>>>>>>> 5723137229e7994452fc6025aaeecf564e6ed357
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_error(char **arr)
{
	unsigned int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i++]);
	}
	free(arr);
	return (NULL);
}

static size_t	ft_strnum(char const *s, char c, size_t sn)
{
	unsigned int	i;

	i = 0;
	while (s[i] == c && s[i])
		i++;
	if (s[i] == '\0')
		return (0);
	sn++;
	while (s[i])
	{
		while (s[i + 1] != '\0' && s[i] == c)
		{
			i++;
			if (s[i] == c)
				continue ;
			sn++;
		}
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

	sn = ft_strnum(s, c, 0);
	arr = (char **)malloc(sizeof(char *) * sn + 1);
	if (!arr)
		return (NULL);
	len = 0;
	j = 0;
	i = 0;
	while (i < sn)
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
