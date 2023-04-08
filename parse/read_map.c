#include "cub3d.h"

int	whites(char *s)
{
	int i;

	i = 0;
	while (s && s[i])
		if (is_space(s[i++]))
			break ;
	if (!s[i])
		return (1);
	return (0);
}

char	**read_file(char *path)
{
	char	*curr;
	char	*tmp;
	char	*str;
	char	**matr;
	int		fd;

	str = ft_strdup("");
	fd = open(path, O_RDONLY);
	curr = get_next_line(fd);
	while (curr)
	{
		tmp = str;
		if (!whites(curr))
			str = ft_strjoin(tmp, curr);
		free(curr);
		curr = get_next_line(fd);
	}
	matr = ft_split(str, '\n');
	free(str);
	free(curr);
	return (matr);
}