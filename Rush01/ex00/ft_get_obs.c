/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_obs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 12:24:47 by nargouse          #+#    #+#             */
/*   Updated: 2020/09/20 22:20:32 by mchibane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushlib.h"

int		**ft_get_obs(char *str)
{
	int **obs;
	int i;
	int j;
	int k;

	k = 0;
	obs = malloc(sizeof(int *) * 4);
	ft_malloc(obs);
	i = -1;
	while (++i < 4)
		obs[i] = malloc(sizeof(int) * 4);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			obs[i][j] = str[k] - 48;
			k += 2;
			j++;
		}
		i++;
	}
	return (obs);
}
