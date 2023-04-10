#include "cub3d.h"

// void	dupes_hero(char **info, int i, int j, int **c)
// {
// 	while (info[i][++j] && !is_space(info[i][j]))
// 		;
// 	if (info[i][j] && info[i][j + 1] && info[i][j] == 'N' && info[i][j + 1] == 'O')
// 		++*c[2];
// 	else if (info[i][j] && info[i][j + 1] && info[i][j] == 'S' && info[i][j + 1] == 'O')
// 		++*c[3];
// 	else if (info[i][j] && info[i][j + 1] && info[i][j] == 'W' && info[i][j + 1] == 'E')
// 		++*c[4];
// 	else if (info[i][j] && info[i][j + 1] && info[i][j] == 'E' && info[i][j + 1] == 'A')
// 		++*c[5];
// 	if (*c[2] != 1 && *c[3] != 1 && *c[4] != 1 && *c[5] != 1)
// 	{
// 		//printf("kuku\n");
// 		exit_false_text_param();
// 	}
// }

void	dupes(char **info)
{
	int	i;
	int	j;
	int	c[6];

	i = -1;
	//c = ft_calloc(sizeof(int), 6);
	while (info && info[++i] && i < 6)
	{
		j = -1;
		while (info[i][++j] && !is_space(info[i][j]))
			;
		if (info[i][j] && info[i][j] == 'F')
			++c[0];
		else if (info[i][j] && info[i][j] == 'C')
			++c[1];
		// else if (ft_strchr(HERO, info[i][j]))
		// 	dupes_hero(info, i, j, &c);
		else if (info[i][j] && info[i][j + 1] && info[i][j] == 'N' && info[i][j + 1] == 'O')
			++c[2];
		else if (info[i][j] && info[i][j + 1] && info[i][j] == 'S' && info[i][j + 1] == 'O')
			++c[3];
		else if (info[i][j] && info[i][j + 1] && info[i][j] == 'W' && info[i][j + 1] == 'E')
			++c[4];
		else if (info[i][j] && info[i][j + 1] && info[i][j] == 'E' && info[i][j + 1] == 'A')
			++c[5];
		else
			exit_false_text_param();
	}
	if (c[0] != 1 && c[1] != 1 && c[2] != 1 && c[3] != 1 && c[4] != 1 && c[5] != 1)
		exit_false_text_param();
}