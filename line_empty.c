/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_empty.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <fbarros@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:12:11 by fbarros           #+#    #+#             */
/*   Updated: 2022/04/16 15:12:23 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	line_empty(char *line)
{
	int	i;

	i = -1;
	while (line && line[++i])
	{
		if (!ft_isspace(line[i]))
			return (false);
	}
	return (true);
}