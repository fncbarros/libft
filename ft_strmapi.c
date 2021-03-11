/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 23:34:11 by fbarros           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/03/10 21:26:30 by fbarros          ###   ########.fr       */
=======
/*   Updated: 2021/03/10 18:37:22 by fbarros          ###   ########.fr       */
>>>>>>> f2c4541fbec4e5281bf6844ee6c6fe45215613f4
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*s2;

	if (!s)
<<<<<<< HEAD
		return (0);
=======
		return(0);
>>>>>>> f2c4541fbec4e5281bf6844ee6c6fe45215613f4
	len = ft_strlen(s);
	s2 = (char *)malloc(len + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s2[i] = (*f)(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
