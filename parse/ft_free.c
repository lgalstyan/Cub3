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