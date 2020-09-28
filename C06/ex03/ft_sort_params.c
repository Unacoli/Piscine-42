/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 12:31:36 by nargouse          #+#    #+#             */
/*   Updated: 2020/09/17 13:58:26 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char **str, int end)
{
	int i;
	int j;

	i = 1;
	while (i < end)
	{
		j = 0;
		while (str[i][j])
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_strcmp(char **argv, int i, int j)
{
	int x;

	x = 0;
	while (argv[i][x] != '\0' && argv[j][x] != '\0')
	{
		if (argv[i][x] != argv[j][x])
		{
			if (argv[i][x] > argv[j][x])
			{
				argv[0] = argv[i];
				argv[i] = argv[j];
				argv[j] = argv[0];
			}
			return ;
		}
		x++;
	}
	if (argv[i][x])
	{
		argv[0] = argv[i];
		argv[i] = argv[j];
		argv[j] = argv[0];
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			ft_strcmp(argv, i, j);
			j++;
		}
		i++;
	}
	ft_print(argv, argc);
}
