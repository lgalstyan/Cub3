/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:57:31 by lgalstya          #+#    #+#             */
/*   Updated: 2023/04/15 14:57:33 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_free_matrix(char **matr)
{
	int	i;

	i = 0;
	if (!matr)
		return ;
	while (matr[i])
	{
		if (matr[i])
		{
			free(matr[i]);
			matr[i] = 0;
		}
		i++;
	}
	free(matr);
	matr = 0;
}
