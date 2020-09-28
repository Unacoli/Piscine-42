/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_col_is_valid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchibane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 16:24:03 by mchibane          #+#    #+#             */
/*   Updated: 2020/09/20 20:42:06 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_up_obs_is_valid(int **obs, int **tab, int x)
{
	int i;
	int visible;
	int max_height;

	max_height = tab[0][x];
	visible = 1;
	i = 0;
	while (i < 4)
	{
		if (tab[i][x] > max_height)
		{
			max_height = tab[i][x];
			visible++;
		}
		i++;
	}
	if (obs[0][x] == visible)
		return (1);
	else
		return (0);
}

int	ft_down_obs_is_valid(int **obs, int **tab, int x)
{
	int i;
	int visible;
	int max_height;

	max_height = tab[3][x];
	visible = 1;
	i = 3;
	while (i >= 0)
	{
		if (tab[i][x] > max_height)
		{
			max_height = tab[i][x];
			visible++;
		}
		i--;
	}
	if (obs[1][x] == visible)
		return (1);
	else
		return (0);
}

int	ft_col_is_valid(int **obs, int **tab, int x)
{
	if (ft_up_obs_is_valid(obs, tab, x)
			&& ft_down_obs_is_valid(obs, tab, x))
		return (1);
	else
		return (0);
}
