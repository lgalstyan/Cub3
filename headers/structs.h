/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:29:39 by lgalstya          #+#    #+#             */
/*   Updated: 2023/03/26 17:29:42 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_rgb
{
	int	r;
	int	g;
	int	b;
}				t_rgb;

typedef struct s_gps
{
	char	*we;
	char	*no;
	char	*so;
	char	*ea;

}				t_gps;

typedef struct s_tool
{
	char	**map;
	int		width;
	int		height;
	t_gps	coordin;
	t_rgb	floor;
	t_rgb	ceiling;

}			t_tool;

#endif
