/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchibane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 15:52:40 by mchibane          #+#    #+#             */
/*   Updated: 2020/09/20 20:44:17 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_left_obs_is_valid(int **obs, int **tab, int y)
{
	int i;
	int visible;
	int max_height;

	max_height = tab[y][0];
	visible = 1;
	i = 0;
	while (i < 4)
	{
		if (tab[y][i] > max_height)
		{
			max_height = tab[y][i];
			visible++;
		}
		i++;
	}
	if (visible == obs[2][y])
		return (1);
	else
		return (0);
}

int	ft_right_obs_is_valid(int **obs, int **tab, int y)
{
	int i;
	int visible;
	int max_height;

	max_height = tab[y][3];
	visible = 1;
	i = 3;
	while (i >= 0)
	{
		if (tab[y][i] > max_height)
		{
			max_height = tab[y][i];
			visible++;
		}
		i--;
	}
	if (visible == obs[3][y])
		return (1);
	else
		return (0);
}

int	ft_line_is_valid(int **obs, int **tab, int y)
{
	if (ft_left_obs_is_valid(obs, tab, y)
			&& ft_right_obs_is_valid(obs, tab, y))
		return (1);
	else
		return (0);
}
