/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:55:49 by lgalstya          #+#    #+#             */
/*   Updated: 2023/04/15 14:55:50 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_gps	init_coordin(char **info)
{
	t_gps	crd;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (info && info[i] && i < 6)
	{
		ignor_space(info[i], &j);
		if (info[i][j] == 'E')
			crd.ea = get_texture(info[i]);
		else if (info[i][j] == 'N')
			crd.no = get_texture(info[i]);
		else if (info[i][j] == 'S')
			crd.so = get_texture(info[i]);
		else if (info[i][j] == 'W')
			crd.we = get_texture(info[i]);
		i++;
	}
	return (crd);
}

t_rgb	init_colors(char **info, char c)
{
	t_rgb	rgb;
	char	*tmp;
	char	**array;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tmp = NULL;
	array = NULL;
	while (info && info[i] && i < 6)
	{
		ignor_space(info[i], &j);
		if (info[i][j] == c)
		{
			tmp = get_texture(info[i]);
			array = ft_split(tmp, ',');
			if (array[0] && array[1] && array[2])
			{
				rgb.r = ft_atoi(array[0]);
				rgb.g = ft_atoi(array[1]);
				rgb.b = ft_atoi(array[2]);
			}
		}	
		i++;
	}
	ft_free_matrix(array);
	free(tmp);
	return (rgb);
}