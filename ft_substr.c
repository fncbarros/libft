/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:19:34 by fbarros           #+#    #+#             */
/*   Updated: 2021/03/02 16:02:52 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*p;

	if (ft_strlen(s) <= start)
		return (NULL);
	p = (char *)malloc(len * sizeof(char) + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (0 < len-- && s[start])
	{
		p[i++] = s[start++];
	}
	p[i] = '\0';
	return (p);
}