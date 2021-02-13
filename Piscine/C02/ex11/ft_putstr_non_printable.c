/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:17:59 by fbarros           #+#    #+#             */
/*   Updated: 2020/11/07 14:28:45 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hex(char c)
{
	char *hex;
	char d;

	hex = "0123456789abcdef";
	if (c < 16)
	{
		write(1, "0", 1);
		d = hex[c + 0];
		write(1, &d, 1);
	}
	else
	{
		c -= 15;
		write(1, "1", 1);
		d = hex[c + 0];
		write(1, &d, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] == 127))
		{
			write(1, "\\", 1);
			if (str[i] == '\0')
			{
				str[i] = '0';
				write(1, &str[i], 1);
				write(1, "0", 1);
			}
			if (str[i] == 127)
				write(1, "7f", 2);
			else
				ft_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
