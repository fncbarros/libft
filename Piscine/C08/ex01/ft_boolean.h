/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:11:24 by fbarros           #+#    #+#             */
/*   Updated: 2020/11/12 16:03:50 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_BOOLEAN_H
# define 	FT_BOOLEAN_H

#include 	<unistd.h>

#define		EVEN(i) i % 2 == 0
#define		TRUE 1
#define		FALSE 0
#define		EVEN_MSG "I have an even number of arguments."
#define		ODD_MSG "I have an odd number of arguments."
#define		SUCCESS 0

typedef	int	t_bool;
#endif
