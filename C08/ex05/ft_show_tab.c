/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 18:39:45 by nargouse          #+#    #+#             */
/*   Updated: 2020/09/23 18:56:23 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char tmp;

	if (nb < 10 && nb >= 0)
	{
		tmp = '0' + nb;
		write(1, &tmp, 1);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		tmp = '0' + (nb % 10);
		write(1, &tmp, 1);
	}
	else if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		tmp = '0' + 8;
		write(1, &tmp, 1);
	}
	else
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != '\0')
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
