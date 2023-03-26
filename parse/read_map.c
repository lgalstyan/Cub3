#include "cub3d.h"

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
		str = ft_strjoin(tmp, curr);
		free(curr);
		curr = get_next_line(fd);
	}
	matr = ft_split(str, '\n');
	free(str);
	free(curr);
	return (matr);
}