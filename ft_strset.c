/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <fbarros@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 12:34:40 by fbarros           #+#    #+#             */
/*   Updated: 2022/03/21 15:38:41 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strset(const char *s, char *set)
/**
 * Finds first instance of any char of set in s.
*/
{
	while (*set)
	{
		if (ft_strchr(s, *set))
			return (ft_strchr(s, *set));
		set++;
	}
	return (NULL);
}
