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
