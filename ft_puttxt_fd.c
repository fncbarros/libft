/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttxt_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <fbarros@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:17:17 by fbarros           #+#    #+#             */
/*   Updated: 2022/04/16 15:18:07 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puttxt_fd(char **text, int fd)
/**
 * Outputs contents of each char * in text to fd
*/
{
	while (*text)
		ft_putendl_fd(*text, fd);
}
