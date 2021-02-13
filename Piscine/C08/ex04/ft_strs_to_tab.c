/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:04:36 by fbarros           #+#    #+#             */
/*   Updated: 2020/11/12 19:29:07 by fbarros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct	s_stock_str
{
	int size;
	char *str;
	char *copy;
} t_stock_trs;

int main(int argc, char **argv)
{
	printf("%s", ft_strjoin(argc, argv, "--"));
}
struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{

}

int main()
{
	ft_strs_to_tab();
}
