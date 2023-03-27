#include "cub3d.h"

int	check_rgb_number(char *str, int *i)
{
	int	count;

	count = count_com(str, *i);
	while (str[*i] && str[*i] != ',' && str[*i] != '\n' && is_space(str[*i]))
	{
		if (count == 3)
		{
			if (str[*i - 1] && is_digit(str[*i - 1]) && str[*i] != '1' && str[*i] != '2')
				return (3);
			count--;
		}
		else 
		{
			if ((str[*i] < '0' || str[*i] > '9'))
					return (4);
		}
		(*i)++;
	}
	return (0);
}

int check_rgb_line(char *str, int *i)
{
	if (check_rgb_number(str, i))
		return (1);
	if (str[*i] && str[*i] == ',')
		(*i)++;
	if (check_rgb_number(str, i))
		return (2);
	if (str[*i] && str[*i] == ',')
		(*i)++;
	if (check_rgb_number(str, i))
		return (3);
	return (0);
}

int	check_rgb(char *info)
{
	int	j;

	j = 0;
	while (info && info[j])
	{
		while (info[j] && !is_space(info[j]))
			j++;
		if (info[j] && info[j] != 'F' && info[j] != 'C')
			return(3);
		j++;
		while (info[j] && !is_space(info[j]))
			j++;
		if (info[j] && check_rgb_line(info, &j))
			return (4);
		while (info[j] && !is_space(info[j]))
			j++;
	}
	return (0);
}

int	check_texture_line(char *info)
{
	int	j;

	j = 0;
	while (info && info[j])
	{
		while (info[j] && !is_space(info[j]))
			j++;
		if (is_corr_texture(info, j))
			return (2);
		j+=2;
		while (info[j] && !is_space(info[j]))
			j++;
		while (info[j] && is_space(info[j]))
			j++;
		if (!info[j] || info[j] == '\n')
			return (0);
		else
			return (2);
	}
	return(0);
}

void	check_info(char **info)
{
	int	i;
	int	f_rgb;
	int	f_path;
	int c_rgb;
	int c_path;

	i = 0;
	c_path = 0;
	c_rgb = 0;
	while (info && info[i] && i < 6)
	{
		f_path = check_texture_line(info[i]);
		f_rgb = check_rgb(info[i]);
		if (f_path != 0 && f_rgb != 0)
			exit_false_text_param();
		else if (f_path == 0)
			c_path++;
		else if (f_rgb == 0)
			c_rgb++;
		i++;
	}
	if (c_path != 4 && c_rgb != 2)
		exit_false_text_param();
}