/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 17:38:05 by fbarros           #+#    #+#             */
/*   Updated: 2021/04/25 17:49:35 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_numlen(int i)
{
	int	len;

	len = 0;
	if (i == 0)
		return (1);
	if (i < 0)
		i *= -1;
	while (i > 0)
	{
		i /= 10;
		len++;
	}
	return (len);
}
