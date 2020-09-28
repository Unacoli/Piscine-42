/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:20:05 by nargouse          #+#    #+#             */
/*   Updated: 2020/09/14 19:05:26 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_error_base(char *base, int l_base)
{
	int i;
	int j;

	i = 0;
	if (!base || l_base == 0 || l_base == 1)
		return (0);
	while (i <= l_base - 1)
	{
		j = i + 1;
		while (j <= l_base - 1)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int nbr, int l_base, char *base)
{
	unsigned int nb;
	unsigned int base_l;

	if (nbr < -1)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	nb = nbr;
	base_l = l_base;
	if (nb > base_l - 1)
	{
		ft_putnbr(nb / base_l, l_base, base);
		ft_putnbr(nb % base_l, l_base, base);
	}
	else
		ft_putchar(base[nb % base_l]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	l_base;

	l_base = ft_strlen(base);
	if (ft_error_base(base, l_base) == 0)
		return ;
	ft_putnbr(nbr, l_base, base);
}
