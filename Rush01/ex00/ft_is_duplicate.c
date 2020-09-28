/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchibane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 14:48:25 by mchibane          #+#    #+#             */
/*   Updated: 2020/09/20 20:43:01 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_duplicate(int nb, int **tab, int y, int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (tab[y][i] == nb)
			return (1);
		i++;
	}
	i = 0;
	while (i < y)
	{
		if (tab[i][x] == nb)
			return (1);
		i++;
	}
	return (0);
}
