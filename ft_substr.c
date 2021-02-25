/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:19:34 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/25 19:05:04 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
