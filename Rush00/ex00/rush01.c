/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 16:29:25 by alagana           #+#    #+#             */
/*   Updated: 2020/09/12 16:31:20 by alagana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_corner(int i, int x, int j, int y)
{
	if ((i == 0 && j == 0) || (i == x - 1 && j == y - 1))
		ft_putchar('/');
	else if ((j == y - 1 && i == 0) || (i == x - 1 && j == 0))
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	ft_line(int i, int x)
{
	if (i == 0 || i == x - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (x < 0 || y < 0)
		return ;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if (j == 0 || j == y - 1)
				ft_corner(i, x, j, y);
			else
				ft_line(i, x);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
