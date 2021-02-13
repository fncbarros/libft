/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:42:47 by fbarros           #+#    #+#             */
/*   Updated: 2020/11/07 10:57:22 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
	char a[] = "jkasd";
	char b[] = "1234";
	unsigned int n = 3;
	char *result = strncpy(a, b, n);
	char *resultft = ft_strncpy(a, b, 4);
	printf("%s\n%s", result, resultft);
}
