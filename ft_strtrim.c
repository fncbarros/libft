/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:23:47 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/17 14:58:27 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "stlib.h"
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int len;

	//len = strlen(s1);
	
	s2 = (char *)malloc(strlen(s1)); //...
	if (!s2)
		return (NULL);
	
}
