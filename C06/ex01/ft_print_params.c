/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 21:17:19 by nargouse          #+#    #+#             */
/*   Updated: 2020/09/17 13:57:09 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char **str, int argc)
{
	int i;

	i = 0;
	while (str[argc][i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int len;
	int i;

	i = 1;
	while (i < argc)
	{
		len = ft_strlen(argv, i);
		write(1, argv[i], len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
