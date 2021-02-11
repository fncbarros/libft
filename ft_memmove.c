/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 22:50:46 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/11 22:20:55 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	tmp[n]; //var lenght array forbidden??

	i = 0;
	while (i < n)
	{
		tmp[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = tmp[i];
		i++;
	}
	return (dest);
}
/*char *a = "abcdef";
char *b = a + 1;
memmove(b, a, 5); // a will be "aabcde"
memcpy(b, a, 5); // a will be "aaaaaa";*/
