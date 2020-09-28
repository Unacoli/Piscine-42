/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 21:07:17 by nargouse          #+#    #+#             */
/*   Updated: 2020/09/13 16:53:41 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	c;
	unsigned int	d;

	i = 0;
	c = 0;
	d = 0;
	while (src[c])
		c++;
	while (dest[d])
		d++;
	j = d;
	if (size > d)
	{
		while (i < size - d - 1 && src[i] != '\0')
			dest[j++] = src[i++];
		dest[j] = '\0';
	}
	else
		return (c + size);
	return (c + d);
}
