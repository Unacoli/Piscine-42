/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchibane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 22:13:26 by mchibane          #+#    #+#             */
/*   Updated: 2020/09/20 22:37:07 by mchibane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushlib.h"

int g_error;

int	main(int argc, char **argv)
{
	int **obs;
	int **tab;

	g_error = 0;
	obs = NULL;
	tab = NULL;
	if (ft_error(argc, argv) == 1)
	{
		obs = ft_get_obs(argv[1]);
		tab = ft_initialize();
		ft_skyscrapper(tab, obs, 0, 0);
	}
	if (g_error != 1)
		ft_putstr("Error\n");
	free(obs);
	free(tab);
	return (0);
}
