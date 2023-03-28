/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:31:10 by lgalstya          #+#    #+#             */
/*   Updated: 2023/03/26 12:31:53 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	check_path(char *path)
{
	int		len;
	char	*ber;

	len = ft_strlen(path);
	if (len <= 4)
	{
		write(2, "Map format isn't correct.\n", 27);
		exit(1);
	}
	len -= 4;
	ber = ".cub";
	if (ft_strncmp(path + len, ber, len) != 0)
	{
		write(2, "Map format isn't correct.\n", 27);
		exit(1);
	}
}

int	check_around(char **info, int i, int j)
{
	if (!info[i][j - 1] || !info[i][j + 1] || !info[i - 1][j] || !info[i + 1][j])
		return (0);
	if (!ft_strrchr(CHARS, info[i][j - 1]) || !ft_strrchr(CHARS, info[i][j + 1]))
	{
		return (0);
	}
	if (!ft_strrchr(CHARS, info[i - 1][j]) || !ft_strrchr(CHARS, info[i + 1][j]))
		return (0);
	return (1);
}

int	check_map(char **info)
{
	int	i;
	int	j;
	int	count;

	i = 5;
	count = 0;
	while (info && info[i])
	{
		++i;
		j = 0;
		while (info[i] && info[i][j])
		{
			if (info[i][j] && !ft_strrchr(CHARS, info[i][j]) && info[i][j] != ' ')
				return (0);
			if (info[i][j] && ft_strrchr(HERO, info[i][j]))
				++count;
			if (info[i][j] == '0' && !check_around(info, i , j))
				return (0);
			++j;
		}
	}
	if (count > 1 || count < 1)
		return (0);
	return (1);
}
