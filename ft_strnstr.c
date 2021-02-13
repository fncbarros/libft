/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 12:06:46 by fbarros           #+#    #+#             */
/*   Updated: 2021/02/13 15:24:04 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (*(haystack + i) != '\0' && len--)
	{
		j = 0;
		printf("1st loop len %ld\n", len);
		while (haystack[i + j] == needle[j] && len < 0)
		{
			printf("2nd loop len %ld\n", len);
			if (needle[i + 1] == '\0')
				return (&((char *)haystack)[i]);
			len--;
			j++;
		}
		i++;
	}
	return (NULL);
}

int main()
{
	printf("%s\n", ft_strnstr("adiebdef", "def", 8));
	printf("%s\n", strnstr("adiebdef", "def", 8));
}
