#include "cub3d.h"

void	ignor_space(char *info, int	*i)
{
	while (info[*i] && !is_space(info[*i]))
		(*i)++;
}

static char *get_texture(char *info)
{
	int		i;
	char	*res;

	i = 0;
	res = NULL;
	ignor_space(info, &i);
	while (info[i] && is_space(info[i]))
		i++;
	ignor_space(info, &i);
	res = ft_substr(info, i, ft_strlen(info) - i);
	return (res);
}

static t_gps	init_coordin(char **info)
{
	t_gps crd;
	int	i;
	int	j;

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
	return(crd);
}

static t_rgb	init_colors(char **info, char c)
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
	return(rgb);
}

t_tool	init_hero(char **info)
{
	t_tool	hero;

	hero.height = get_map_height(info);
	hero.width = get_map_width(info);
	hero.coordin = init_coordin(info);
	hero.ceiling = init_colors(info, 'C');
	hero.floor = init_colors(info, 'F');
	return (hero);
}