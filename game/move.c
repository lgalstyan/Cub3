#include "cub3d.h"

void	move_a(t_tool *hero)
{
	hero->pdp.pa -= 0.1;
	if (hero->pdp.pa < 0)
		hero->pdp.pa += 2 * PI;
	hero->pdp.dirx = cos(hero->pdp.pa) * 5;
	hero->pdp.diry = sin(hero->pdp.pa) * 5;
	if (hero->map[(int)hero->pdp.posy][(int)hero->pdp.posx - 1] != '1')
	{
		hero->map[(int)hero->pdp.posy][(int)hero->pdp.posx] = '0';
		hero->pdp.posx--;
		hero->map[(int)hero->pdp.posy][(int)hero->pdp.posx] = 'N';
		mlx_clear_window(hero->mlx, hero->mlx_win);
		draw_map(hero);
	}
}

void	move_s(t_tool *hero)
{
	hero->pdp.posx += hero->pdp.dirx;
	hero->pdp.posy += hero->pdp.diry;
	if (hero->map[(int)hero->pdp.posy + 1][(int)hero->pdp.posx] != '1')
	{
		hero->map[(int)hero->pdp.posy][(int)hero->pdp.posx] = '0';
		hero->pdp.posy++;
		hero->map[(int)hero->pdp.posy][(int)hero->pdp.posx] = 'N';
		mlx_clear_window(hero->mlx, hero->mlx_win);
		draw_map(hero);
	}
}

void	move_d(t_tool *hero)
{
	hero->pdp.pa += 0.1;
	if (hero->pdp.pa > 2 * PI)
		hero->pdp.pa -= 2 * PI;
	hero->pdp.dirx = cos(hero->pdp.pa) * 5;
	hero->pdp.diry = sin(hero->pdp.pa) * 5;
	if (hero->map[(int)hero->pdp.posy][(int)hero->pdp.posx + 1] != '1')
	{
		hero->map[(int)hero->pdp.posy][(int)hero->pdp.posx] = '0';
		hero->pdp.posx++;
		hero->map[(int)hero->pdp.posy][(int)hero->pdp.posx] = 'N';
		mlx_clear_window(hero->mlx, hero->mlx_win);
		draw_map(hero);
	}
}

void	move_w(t_tool *hero)
{
	hero->pdp.posx -= hero->pdp.dirx;
	hero->pdp.posy -= hero->pdp.diry;
	if (hero->map[(int)hero->pdp.posy - 1][(int)hero->pdp.posx] != '1')
	{
		hero->map[(int)hero->pdp.posy][(int)hero->pdp.posx] = '0';
		hero->pdp.posy--;
		hero->map[(int)hero->pdp.posy][(int)hero->pdp.posx] = 'N';
		mlx_clear_window(hero->mlx, hero->mlx_win);
		draw_map(hero);
	}
}