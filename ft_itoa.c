/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:05:49 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/17 18:27:29 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	char			*s;
//	unsigned int	i;

	if ( n < 0)
	{
		(unsigned int)n *= -1;
		s++ = '0';
	}
	while (n 
}

int main()
{
	printf("%s", ft_itoa(199));
}
