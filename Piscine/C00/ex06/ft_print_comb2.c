/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 15:55:06 by fbarros           #+#    #+#             */
/*   Updated: 2020/10/28 19:19:05 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ln(int i)
{
	char a;
	char b;

	a = i / 10 + '0';
	b = i % 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
}

void	ft_rn(int i, int j)
{
	char c;
	char d;

	c = j / 10 + '0';
	d = j % 10 + '0';
	write(1, &c, 1);
	write(1, &d, 1);
	if (i < 98 && j <= 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	j = i + 1;
	while (i < 99)
	{
		while (j < 100)
		{
			ft_ln(i);
			ft_rn(i, j);
			j++;
		}
		i++;
		j = i + 1;
	}
}
