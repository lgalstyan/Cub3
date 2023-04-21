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


typedef struct s_pdp
{
	double	pa;
	double	posx;
	double	posy;
	double	dirx;
	double	diry;
	double	planex;
	double	planey;
	double	time;
	double	oldtime;
	double	camerax;
	double	raydirx;
	double	raydiry;
}				t_pdp;

typedef struct s_flags
{
	int	flag0;
	int	flag1;
	int	flag2;
	int	flag3;
	int	i;
	int	j;
}				t_flag;

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
	int		mx;
	int		my;
	char	**map;
	char	*add[9];
	char	player;
	int		width;
	int		height;
	t_gps	coordin;
	t_rgb	floor;
	t_rgb	ceiling;
	t_pdp	pdp;
	void	*mlx;
	void	*mlx_win;
	void	*img;

}			t_tool;

#endif
