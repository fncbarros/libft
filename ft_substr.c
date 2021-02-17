/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:19:34 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/17 14:04:40 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int		i;

	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (0 < len--)
	{
		p[i++] = s[start++];
	}
	p[i] = '\0';;
	return (p);
}

int main()
{
	char *c = "abcde";
	printf("%s", ft_substr(c, 1, 3));
}
