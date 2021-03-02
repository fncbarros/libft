/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 12:06:46 by fbarros           #+#    #+#             */
/*   Updated: 2021/03/02 13:03:39 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strnstr(const char *hst, const char *ndl, size_t len)
{
	int	i;
	int	j;

	if (*ndl == '\0')
		return ((char *)hst);
	i = 0;
	while (*(hst + i) != '\0' && len--)
	{
		j = 0;
		while (hst[i + j] == ndl[j] && ndl[j])
		{
			j++;
			--len;
			if (ndl[j] == '\0')
				return ((char *)hst + i);
		}
		i++;
	}
	return (NULL);
}
