/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 13:23:07 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/16 15:50:33 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include <string.h>
#include <unistd.h>

static void	ft_putchar(char *c)
{
	while (c)
	{
		write(1, &c++, 2);
	}
	return (0);
}

char	*ft_strdup(const char *s)
{
	unsigned char	*s2;

	s2 = (unsigned char*)malloc(sizeof(s));
	if (!s2)
	{
		ft_putchar("Insufficient memory"); // ??not sure
		return (NULL);
	}
	while (*s)
		*s2++ = *s++;
	return (s2);
}
