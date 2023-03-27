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

void	printf_matrix(char **map)
{
	int	i;

	i = 0;
	while (map && map[i])
	{
		printf("%s\n", map[i]);
		i++;
	}
}

// void check_map(char **info)
// {
// 	int	i;

// 	i = 6;
// 	while (info && info[i])
// 	{

// 		i++;
// 	}
// }

t_tool	parser(char *path)
{
	char	**info;
	t_tool	hero;

	check_path(path);
	info = read_file(path);
	hero.map = info;
	check_info(info);

	///////      TODO
	//grel check_map funtion _ while ov pttvel i = 6
	//ic qani vor minchev 6rd toxy OK a ete hasel a stex .

	// check_map(info);
	hero.height = get_map_height(info);
	hero.width = get_map_width(info);
	// printf("height = %d, width = %d\n", hero.height, hero.width);
	printf_matrix(info);
	return (hero);
}
