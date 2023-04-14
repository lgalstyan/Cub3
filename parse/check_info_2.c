/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_info_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:13:50 by lgalstya          #+#    #+#             */
/*   Updated: 2023/04/13 17:13:52 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	is_space(char c)
{
	if (c == ' ')
		return (0);
	return (1);
}

int	is_corr_texture(char *s, int i, int (*fd)[4])
{
	if (s && s[i] && s[i] == 'N' && s[i + 1]
		&& s[i + 1] == 'O' && s[i + 2] && !is_space(s[i + 2]))
		*fd[0] += 1;
	else if (s && s[i] && s[i] == 'S' && s[i + 1]
		&& s[i + 1] == 'O' && s[i + 2] && !is_space(s[i + 2]))
		*fd[1] += 1;
	else if (s && s[i] && s[i] == 'W' && s[i + 1]
		&& s[i + 1] == 'E' && s[i + 2] && !is_space(s[i + 2]))
		*fd[2] += 1;
	else if (s && s[i] && s[i] == 'E' && s[i + 1]
		&& s[i + 1] == 'A' && s[i + 2] && !is_space(s[i + 2]))
		*fd[3] += 1;
	else
		return (0);
	return (2);
}

int	count_com(char *str, int i)
{
	int	count;

	count = 0;
	while (str && str[i])
	{
		if (str[i] == ',')
			count++;
		i++;
	}
	count++;
	return (count);
}
