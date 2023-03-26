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

// void	printf_matrix(char **map)
// {
// 	int	i;

// 	i = 0;
// 	while (map && map[i])
// 	{
// 		printf("%s\n", map[i]);
// 		i++;
// 	}
// }
int	is_space(char c)
{
	if (ft_strchr(SPACES, c) != 0)
		return (1);
	return (0);
}

// int	is(char *s)
// {
// 	int	i;

// 	i = 0;
// 	if (s && s[i] && s[i] = 'N'  && s[i] == 'O')
// 		return (1);
// 	else if (s && s[i] && s[i] = 'S'  && s[i] == 'O')
// 		return (1);
// 	else if (s && s[i] && s[i] = 'W'  && s[i] == 'E')
// 		return (1);
// 	else if (s && s[i] && s[i] = 'E'  && s[i] == 'A')
// 		return (1);
// }

int	check_line(char *info)
{
	int	count;
	int	j;

	j = 0;
	while (info && info[j])
	{
		while (is_space(info[j]))
			j++;
		if ()
	}
}

void	check_info(char **info)
{
	int	i;

	i = 0;
	while (info && info[i])
	{
		i++;
	}
}

t_tool	parser(char *path)
{
	char	**info;
	t_tool	hero;

	check_path(path);
	info = read_file(path);
	check_info(info);
	// printf_matrix(map);
	return (hero);
}
