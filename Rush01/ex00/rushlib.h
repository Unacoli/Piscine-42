/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 20:09:46 by nargouse          #+#    #+#             */
/*   Updated: 2020/09/20 22:23:34 by mchibane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSHLIB_H
# define RUSHLIB_H

# include <stdlib.h>
# include <unistd.h>

int		ft_strlen2(char **str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_is_duplicate(int nb, int **tab, int y, int x);
int		ft_line_is_valid(int **obs, int **tab, int y);
int		ft_col_is_valid(int **obs, int **tab, int x);
void	ft_print_solution(int **tab);
int		ft_error(int argc, char **str);
int		**ft_get_obs(char *str);
int		**ft_initialize(void);
void	ft_skyscrapper(int **tab, int **obs, int y, int x);
void	ft_malloc(int **tab);

#endif
