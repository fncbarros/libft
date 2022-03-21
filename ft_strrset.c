/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <fbarros@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:10:44 by fbarros           #+#    #+#             */
/*   Updated: 2022/03/21 15:38:00 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrset(const char *s, char *set)
/**
 * Finds last instance of any char in set within s.
*/
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = NULL;
	ptr2 = NULL;
	while (*set)
	{
		ptr1 = ft_strrchr(s, *set);
		if (ptr1 > ptr2)
			ptr2 = ptr1;
		set++;
	}
	return (ptr2);
}
