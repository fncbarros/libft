/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:49:16 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/12 17:56:45 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return (&((char *)s)[i]);
		}
		i++;
	}
//	p = s[i];
	return (NULL);
}

int main()
{
	char *str = "abcd";
	
	printf("%c\n", *ft_strchr(str, 'c'));
}
