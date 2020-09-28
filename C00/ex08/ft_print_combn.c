/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 16:41:13 by nargouse          #+#    #+#             */
/*   Updated: 2020/09/15 11:08:20 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_tab(int tab[], int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		ft_putchar(tab[i] + 48);
		i++;
	}
	if (tab[0] != 10 - len)
		write(1, ", ", 2);
}

void	ft_sort_comb(int tab[], int len)
{
	int i;

	i = len - 1;
	while (tab[0] < (10 - len + 1))
	{
		while (tab[i] <= (10 - len + i))
		{
			ft_print_tab(tab, len);
			tab[i] += 1;
		}
		while (tab[i] >= (10 - len + i) && i != 0)
			i--;
		tab[i] += 1;
		while (i != (len - 1) && tab[i + 1] >= (10 - len + i))
		{
			tab[i + 1] = tab[i] + 1;
			i++;
		}
		i = len - 1;
	}
}

void	ft_print_combn(int n)
{
	int tab[9];
	int i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	ft_sort_comb(tab, n);
}
