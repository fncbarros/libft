/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:12:37 by fbarros           #+#    #+#             */
/*   Updated: 2020/10/30 13:05:06 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int a, int b, int *tab)
{
	int tmp;

	tmp = tab[a];
	tab[a] = tab[b];
	tab[b] = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;

	a = 0;
	while (a < size - 1)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				ft_swap(a, b, tab);
				b++;
			}
			else
				b++;
		}
		a++;
	}
}
