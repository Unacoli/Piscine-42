/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 19:00:53 by nargouse          #+#    #+#             */
/*   Updated: 2020/09/11 14:31:23 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		to_cap_or_not(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || to_cap_or_not(str[i - 1]) == 0)
			{
				str[i] = str[i] - 32;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (to_cap_or_not(str[i - 1]) == 1)
			{
				str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}
