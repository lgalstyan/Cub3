/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:31:03 by lgalstya          #+#    #+#             */
/*   Updated: 2023/03/26 12:31:05 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include <math.h>

// void	init_params(t_tool *hero)
// {
// 	int	i;

// 	i = 0;
// 	while (i < 9)
// 	{
// 		hero->addr[array_counter] = NULL;
// 		++i;
// 	}
// }

void	def_angle(t_tool *hero)
{
	if (hero-> player == 'E')
		hero->pdp.pa = 0;
	else if (hero-> player == 'N')
		hero->pdp.pa = 90;
	else if (hero-> player == 'W')
		hero->pdp.pa = 180;
	else if (hero-> player == 'S')
		hero->pdp.pa = 270;
}

t_tool	parser(char *path)
{
	char	**info;
	t_tool	hero;

	check_path(path);
	info = read_file(path);
	hero.map = info;
	check_info(info);
	check_map(info);
	hero = init_hero(info);
	def_angle(&hero);
	// init_params(&hero);
	ft_free_matrix(info);
	// print_hero(hero);
	return (hero);
}
