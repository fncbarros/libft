/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:44:57 by fbarros           #+#    #+#             */
/*   Updated: 2020/11/08 12:03:30 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strleng(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base == '\0' || base[i + 1] == 0)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	str_leng;

	if (ft_check(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		str_leng = ft_strleng(base);
		if (nbr >= str_leng)
		{
			ft_putnbr_base((nbr / str_leng), base);
			ft_putnbr_base((nbr % str_leng), base);
		}
		else
			write(1, &base[nbr], 1);
	}
}
