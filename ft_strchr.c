/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <fbarros@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:49:16 by fbarros           #+#    #+#             */
/*   Updated: 2022/03/29 11:32:42 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int		i;

	i = 0;
	while (s && i <= ft_strlen(s))
	{
		if (s[i] == (unsigned char)c)
			return (&((char *)s)[i]);
		i++;
	}
	return (0);
}
