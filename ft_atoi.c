/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 13:08:25 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/25 19:26:42 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int n;
	int len;
	int j;
	int	neg;

	neg = 0;	
	j = 0;
	n = 0;
	len = ft_strlen(str);
	while ((str[j] == '-' || str [j] == '+') && j++)
	{
		if (str[j] == '-')
		{
			neg++;
		}
	}
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
	if (neg % 2 != 0)
		neg *= -1;
	return (n);
}
