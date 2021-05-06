/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strset_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 18:44:35 by fbarros           #+#    #+#             */
/*   Updated: 2021/04/25 19:02:55 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strset(const char *s, char *set)
{
	while (*set)
	{
		if (ft_strchr(s, *set))
			return (ft_strchr(s, *set));
		set++;
	}
	return (NULL);
}
