/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchibane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 18:10:49 by mchibane          #+#    #+#             */
/*   Updated: 2020/09/20 22:24:16 by mchibane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushlib.h"

int	**ft_initialize(void)
{
	int i;
	int f;
	int **tab;

	tab = malloc(sizeof(int *) * 4);
	ft_malloc(tab);
	i = 0;
	while (i < 4)
	{
		tab[i] = malloc(sizeof(int) * 4);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		f = 0;
		while (f < 4)
		{
			tab[i][f] = 0;
			f++;
		}
		i++;
	}
	return (tab);
}
