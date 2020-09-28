/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_solution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchibane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:11:52 by mchibane          #+#    #+#             */
/*   Updated: 2020/09/20 20:43:16 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushlib.h"

void	ft_print_solution(int **tab)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(tab[i][j] + 48);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
