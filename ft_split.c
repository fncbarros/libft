/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:08:40 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/25 19:27:06 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
//#include <string.h>

static size_t	ft_strnum(char const *s, char c, size_t sn)
{
	int	i;

	i = 0;
	while (s[i] == c)
	{
		i++;
	}
	sn++;
	while (s[i++])
	{
		while (s[i + 1] != '\0' && s[i] == c)
		{
			i++;
			if (s[i] == c)
				continue;
			sn++;
		}
	}
	//printf("%ld\n", sn);
	return (sn);
}

static size_t	ft_nxt_strlen(char *s, char c)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
//	printf("%c\n", s[i]);
	while (s[i++] != c)
		len++;
//	printf("len is %ld\n", len);
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char 	*strings;
	unsigned int		i;
	size_t sn;
	size_t len;

	sn = ft_strnum(s, c, 0);
	if (!(arr = (char **)malloc(sn * sizeof(char*) + 1)))
		return (NULL);
	strings = (char *)s;
	len = 0;
	i = 0;
	while (sn--)
	{
		i += len;
		while (s[i] && s[i] == c && i++);
//		printf("%d\n", i);
		len = ft_nxt_strlen(strings + i, c);
//		printf("len = %ld  sn = %ld\n\n", len, sn);
		if(!(*arr++ = ft_substr(strings, i, len)))
				{
					free (arr);
					return (NULL);
				}
		printf("%s", *arr);
	}
	return (arr);
}

int main()
{
	char **r = ft_split(">a>>split >this>>str>a>", '>');
	while (**r++)
		printf("%s", *r);
}
