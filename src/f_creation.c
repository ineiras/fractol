#include "fractol.h"

void	map_pixel_to_complex(t_fractal *data, int x, int y)
{
	data->x_map = data->x_min + ((double)x / data->win_width) * (data->x_max - data->x_min);
	data->y_map = data->y_min + ((double)y / data->win_height) * (data->y_max - data->y_min);
}

void	color_pixel_xy(t_fractal *data, int x, int y, int color)
{
	char	*pixel_dest;

	pixel_dest = data->addr + (y * data->line_length + x * (data->bpp / 8));
	*(unsigned int*)pixel_dest = color;
}

// Coloreamos cada uno de los pixeles, los mapeamos al plano complejo y les aplicamos la equación del fractal.
void	fractal_maker(t_fractal *data)
{
	int	x;
	int	y;
	
	x = 0;
	while (x < data->win_width)
	{
		y = 0;
		while (y < data->win_height)
		{
			map_pixel_to_complex(data, x, y);
			if (ft_strncmp(data->fractal, "Mandelbrot", 11) == 0)
				ft_calc_mandelbrot(data, x, y);
			if (ft_strncmp(data->fractal, "Ship", 5) == 0)
				ft_calc_ship(data, x, y);
			else if (ft_strncmp(data->fractal, "Julia", 6) == 0)
				ft_calc_julia(data, x, y);
			y++;
		}
		x++;
	}
}

void    fractal_creation(t_fractal *data) 
{
	if (data->img) // Test de leaks, destruimos cada img antes de crear una nueva.
		mlx_destroy_image(data->innit, data->img);
	data->img = mlx_new_image(data->innit, data->win_width, data->win_height);
	if (!data->img)
		free_struct(data, false);
	data->addr = mlx_get_data_addr(data->img, &data->bpp, &data->line_length, &data->endian);
	if (!data->addr)
		free_struct(data, false);
    fractal_maker(data);
    mlx_put_image_to_window(data->innit, data->window, data->img, 0, 0);
}
