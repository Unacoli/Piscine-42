/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skycrapper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchibane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 12:32:49 by mchibane          #+#    #+#             */
/*   Updated: 2020/09/20 22:39:59 by mchibane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushlib.h"

int	g_error;

void	ft_skyscrapper(int **tab, int **obs, int y, int x)
{
	tab[y][x] = 1;
	while (tab[y][x] <= 4)
	{
		if (ft_is_duplicate(tab[y][x], tab, y, x) == 0)
		{
			if (x < 3 && y < 3)
				ft_skyscrapper(tab, obs, y, x + 1);
			if (x == 3 && y < 3)
				if (ft_line_is_valid(obs, tab, y))
					ft_skyscrapper(tab, obs, y + 1, 0);
			if (y == 3 && x < 3)
				if (ft_col_is_valid(obs, tab, x))
					ft_skyscrapper(tab, obs, y, x + 1);
			if (y == 3 && x == 3)
				if (ft_col_is_valid(obs, tab, x)
						&& ft_line_is_valid(obs, tab, y))
				{
					ft_print_solution(tab);
					g_error = 1;
					return ;
				}
		}
		tab[y][x]++;
	}
}
