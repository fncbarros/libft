/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 13:08:25 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/22 15:46:40 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int n;
	int len;
	int j;
	
	j = 0;
	n = 0;
	len = ft_strlen(nptr);
	if (str[0] == '-' || str [0] == '+')
		j++;
	while (j < len)
	{
		if (str[j] < '0' || str[j] > '9')
			break;
		else
		{
			n *= 10;
			n += str[j] - '0';
			j++;
		}
	}
	if (str[0] == '-')
		n *= -1;
	return (n);
}
