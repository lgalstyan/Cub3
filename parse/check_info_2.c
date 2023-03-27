#include "cub3d.h"

int	is_space(char c)
{
	if (ft_strchr(SPACES, c) != 0)
		return (0);
	return (1);
}

int	is_corr_texture(char *s, int i)
{
	if (s && s[i] && s[i] == 'N'  && s[i + 1] && s[i + 1] == 'O' && s[i + 2] && !is_space(s[i + 2]))
		return (0);
	else if (s && s[i] && s[i] == 'S' && s[i + 1]  && s[i + 1] == 'O' && s[i + 2] && !is_space(s[i + 2]))
		return (0);
	else if (s && s[i] && s[i] == 'W' && s[i + 1] && s[i + 1] == 'E' && s[i + 2] && !is_space(s[i + 2]))
		return (0);
	else if (s && s[i] && s[i] == 'E' && s[i + 1] && s[i + 1] == 'A' && s[i + 2] && !is_space(s[i + 2]))
		return (0);
	else
		return (2);
}

int	count_com(char *str, int i)
{
	int	count;

	count = 0;
	while (str[i] && str[i] != ',' && str[i] != '\n' && is_space(str[i]))
	{
		count++;
		i++;
	}
	return (count);
}
