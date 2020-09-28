/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 21:02:17 by nargouse          #+#    #+#             */
/*   Updated: 2020/09/18 14:38:34 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char **str)
{
	int i;

	i = 0;
	while (str[0][i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int len;

	(void)argc;
	len = ft_strlen(argv);
	write(1, argv[0], len);
	write(1, "\n", 1);
	return (0);
}
