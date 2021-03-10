/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 13:23:07 by fbarros           #+#    #+#             */
/*   Updated: 2021/03/10 18:25:02 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;

	s2 = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s, ft_strlen(s) + 1);
	return (s2);
}
