/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:14:10 by lgalstya          #+#    #+#             */
/*   Updated: 2023/04/13 17:14:11 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	exit_false_text_param(void)
{
	write(2, "Texture parametrs isn't correct\n", 33);
	exit(2);
}

void	exit_false_map(void)
{
	write(2, "Map isn't correct\n", 19);
	exit(2);
}

void	exit_false_map_form(void)
{
	write(2, "Map format isn't correct.\n", 27);
	exit(2);
}
