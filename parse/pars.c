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

t_tool	parser(char *path)
{
	char	**info;
	t_tool	hero;

	check_path(path);
	info = read_file(path);
	hero.map = info;
	check_info(info);
	printf_matrix(info);
	return (hero);
}
