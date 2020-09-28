/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 17:41:30 by nargouse          #+#    #+#             */
/*   Updated: 2020/09/24 16:12:53 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char				*ft_strdup(char *src)
{
	char	*str;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (src[size])
		size++;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == 0)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			i;
	int			j;
	int			index;

	i = 0;
	index = 0;
	result = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (result == 0)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		result[index].size = j;
		result[index].str = av[i];
		result[index].copy = ft_strdup(av[i]);
		i++;
		index++;
	}
	result[index].size = '\0';
	result[index].str = 0;
	result[index].copy = 0;
	return (result);
}
