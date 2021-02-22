/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 13:23:07 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/18 15:14:28 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*s2;

	s2 = (char*)malloc(sizeof(s));
	if (!s2)
		return (NULL);
	while (*s)
		*s2++ = *s++;
	return (s2);
}
