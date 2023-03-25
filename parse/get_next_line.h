/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:08:21 by lgalstya          #+#    #+#             */
/*   Updated: 2022/04/20 17:42:22 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42

# endif

char	*line_ret(char *s, int fd);

char	*get_next_line(int fd);

char	*ft_strchr(char *s, int c);

size_t	ft_strlen(char *s);

char	*ft_strjoin(char *s1, char *s2);

char	*ft_substr(char *s, unsigned int start, size_t len);

char	*ft_strdup(char *s1);

#endif
