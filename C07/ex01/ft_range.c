/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 15:03:54 by nargouse          #+#    #+#             */
/*   Updated: 2020/09/24 14:09:06 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;
	int j;

	i = min;
	j = 0;
	tab = malloc(sizeof(int) * (max - min + 1));
	if (tab == 0)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	return (tab);
}
