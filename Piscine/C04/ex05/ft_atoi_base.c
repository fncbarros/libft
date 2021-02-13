/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 12:18:15 by fbarros           #+#    #+#             */
/*   Updated: 2020/11/08 12:34:42 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		j *= 10;
		j += (str[i] - '0');
		i++;
	}
	return (j);
}

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

void	ft_putnbr_base(int nbr, char *base)
{
	int	str_leng;

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

int		ft_atoi_base(char *str, char *base)
{
	int nbr;

	ft_check(base);
	nbr = ft_atoi(str);
	ft_putnbr_base(nbr, base);
	return (0);
}
