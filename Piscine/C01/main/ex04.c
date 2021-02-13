/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:04:49 by fbarros           #+#    #+#             */
/*   Updated: 2020/10/29 18:07:35 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int x = 42;
	int y = 10;
	int *div;
	int *mod;

	div = &x;
	mod = &y;
	ft_ultimate_div_mod(div, mod);
	printf("div = %d, mod = %d", x, y);
}
