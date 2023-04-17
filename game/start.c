#include "cub3d.h"

void	move_a(t_tool *hero)
{
	// hero->dirx -=0.1
	if (hero->map[hero->pdp.posy][hero->pdp.posx - 1] != '1')
	{
		hero->map[hero->pdp.posy][hero->pdp.posx] = '0';
		hero->pdp.posx--;
		hero->map[hero->pdp.posy][hero->pdp.posx] = 'N';
		mlx_clear_window(hero->mlx, hero->mlx_win);
		draw_map(hero);
	}
}

void	move_s(t_tool *hero)
{
	if (hero->map[hero->pdp.posy + 1][hero->pdp.posx] != '1')
	{
		hero->map[hero->pdp.posy][hero->pdp.posx] = '0';
		hero->pdp.posy++;
		hero->map[hero->pdp.posy][hero->pdp.posx] = 'N';
		mlx_clear_window(hero->mlx, hero->mlx_win);
		draw_map(hero);
	}
}

void	move_d(t_tool *hero)
{
	if (hero->map[hero->pdp.posy][hero->pdp.posx + 1] != '1')
	{
		hero->map[hero->pdp.posy][hero->pdp.posx] = '0';
		hero->pdp.posx++;
		hero->map[hero->pdp.posy][hero->pdp.posx] = 'N';
		mlx_clear_window(hero->mlx, hero->mlx_win);
		draw_map(hero);
	}
}

void	move_w(t_tool *hero)
{
	if (hero->map[hero->pdp.posy - 1][hero->pdp.posx] != '1')
	{
		hero->map[hero->pdp.posy][hero->pdp.posx] = '0';
		hero->pdp.posy--;
		hero->map[hero->pdp.posy][hero->pdp.posx] = 'N';
		mlx_clear_window(hero->mlx, hero->mlx_win);
		draw_map(hero);
	}
}

int	move_player(int key, t_tool *hero)
{
	if (key == 0 || key == 123)
	{
		move_a(hero);
	}
	else if (key == 1 || key == 125)
	{
		move_s(hero);
	}
	else if (key == 2 || key == 124)
	{
		move_d(hero);
	}
	else if (key == 13 || key == 126)
	{
		move_w(hero);
	}
	else if (key == 53)
	{
		exit(0);//exit_game(hero);
	}
	return (0);
}

void	start(t_tool hero)
{
	// char	*addr;
	// char	dst;
	// int		bits_per_pixel;
	// int		line_length;
	// int		endian;

	// hero.pdp.posx = 22;
	// hero.pdp.posy = 12;
	hero.pdp.dirx = -1;
	hero.pdp.diry = 0;
	hero.pdp.planex = 0;
	hero.pdp.planey = 0.66;
	hero.pdp.time = 0;
	hero.pdp.oldtime = 0;
	hero.mlx = mlx_init();
	hero.mlx_win = mlx_new_window(hero.mlx, 1024, 512, "Cub3D");
	//map_to_window(hero, hero.mlx, mlx_win);
	hero.img = mlx_new_image(hero.mlx, 1024, 512);
	// addr = mlx_get_data_addr(img, &bits_per_pixel, &line_length, &endian);
	// dst = data->addr + ()
	draw_map(&hero);
	// mlx_pixel_put(hero.mlx, hero.mlx_win, hero.pdp.posx, hero.pdp.posy, 0x00FF0000);
	mlx_hook(hero.mlx_win, 2, 1L << 0, move_player, &hero);
	mlx_loop(hero.mlx);



}