#include "cub3d.h"

int	main(int argc, char **argv)
{
	// t_tool	hero;

	if (argc != 2)
	{
		write(2, "Must map path as argument\n", 27);
		return (1);
	} 
	parser(argv[1]);
	// system("leaks cub3");
	return (0);

}