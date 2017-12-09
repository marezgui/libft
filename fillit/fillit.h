/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 12:07:50 by souakrim          #+#    #+#             */
/*   Updated: 2017/12/07 22:02:21 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <math.h>
# include "libft/libft.h"
# define BUFF_SIZE 546

int		g_nbr_t;

int		ft_checkfile(char *str);
int		ft_checktab(char **str);
char	**ft_read(char *argv);
int		ft_check(char **str);
int		**ft_getxy(char **tab);
char	**ft_createmap();
void	ft_resizemap(char **map);
char	**ft_solve(char **tab);
#endif
