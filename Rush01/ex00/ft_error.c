/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchibane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 22:14:34 by mchibane          #+#    #+#             */
/*   Updated: 2020/09/20 22:45:40 by mchibane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushlib.h"

int g_error;

int	ft_verify(int i, int len, char **str)
{
	if (len != 31)
	{
		g_error = 0;
		return (0);
	}
	while (i < len - 1)
	{
		if (str[1][i] >= '1' && str[1][i] <= '4' && str[1][i + 1] == ' ')
			i = i + 2;
		else
		{
			g_error = 0;
			return (0);
		}
	}
	return (i);
}

int	ft_error(int argc, char **str)
{
	int i;
	int len;

	i = 0;
	if (argc == 2)
	{
		len = ft_strlen2(str);
		if (ft_verify(i, len, str) != 0)
		{
			if (str[1][30] >= '1' && str[1][30] <= '4')
				return (1);
		}
		else if (str[1][30] < '1' || str[1][30] > '4')
		{
			g_error = 0;
			return (0);
		}
	}
	else
	{
		g_error = 0;
		return (0);
	}
	return (0);
}
