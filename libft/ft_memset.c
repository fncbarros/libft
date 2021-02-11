/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:09:30 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/09 11:52:43 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	ft_itoc(int c)
{
	unsigned char	d;

	d = '0' + c;
	return (d);
}

void	*ft_memset(void *s, int c, size_t n)
{
	long unsigned int	i;	

	if (c > 47 && c < 58)
	{
		ft_itoc(c);
	}
	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}
