#include "cub3d.h"

void	check_path(char *path)
{
	int		len;
	char	*ber;

	len = ft_strlen(path);
 	if (len <= 4)
	{
			write(2, "Map form at isn't correct.\n", 29);
			exit (1);	
	}		
	len	-= 4;
	ber = ".cub";
	if (ft_strncmp(path + len, ber, len) == 0)
	{
			write(2, "Map form at isn't correct.\n", 29);
			exit (1);	
	}
}
