/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_useful_fcts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 20:20:06 by nargouse          #+#    #+#             */
/*   Updated: 2020/09/20 22:23:13 by mchibane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushlib.h"

int		ft_strlen2(char **str)
{
	int i;

	i = 0;
	while (str[1][i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_malloc(int **tab)
{
	if (tab == NULL)
		return ;
}
