/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:30:35 by lgalstya          #+#    #+#             */
/*   Updated: 2023/03/26 12:30:37 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# define POSSIBCHARS "01WNSE"
# define SPACES  " \n\t"

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include "structs.h"

t_tool	parser(char *path);
void	check_path(char *path);
char	*get_next_line(int fd);
int		ft_strlen(char *s);
char	*ft_strdup(char *src);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
char	**read_file(char *path);
int     is_digit(char c);
int     is_space(char c);
int     is_corr_texture(char *s, int i);
int     count_com(char *str, int i);
char	**ft_split(char const *s, char c);

void	check_info(char **info);
void	exit_false_text_param(void);

#endif
