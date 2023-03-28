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
# define CHARS  "01NSWE"
# define HERO  "NSWE"

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
int     ft_strcmp(char *s1, char *s2);
int     ft_strrchr(char *s, char c);
char	*ft_strchr(char *s, int c);
char	**read_file(char *path);
int     is_digit(char c);
int     is_space(char c);
int     is_corr_texture(char *s, int i);
int     count_com(char *str, int i);
char	**ft_split(char const *s, char c);
char	*ft_substr(char *s, int start, int len);
int     ft_atoi(char *str);
void	ft_free_matrix(char **matr);
int     get_map_height(char **info);
int     get_map_width(char **info);
void	check_info(char **info);
void    check_map(char **info);
void	exit_false_text_param(void);
void	exit_false_map_form(void);
void	exit_false_map(void);
t_tool	init_hero(char **info);



void    print_hero(t_tool hero);

#endif
