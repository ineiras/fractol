#include "fractol.h"

double	calc_z_magnitude_ship(t_fractal *data)
{
	double	z_mag;
	double 	z_mag_r;
	double	z_mag_i;

	z_mag_r = data->ship.real_part; 
	z_mag_i = data->ship.imag_part;
	z_mag = (z_mag_r * z_mag_r) + (z_mag_i * z_mag_i); 
	return (z_mag);
}

void	ship_equation(t_fractal *data) // Igual que Mandelbrot pero tratando la parte real e imag como valores absoultos.
{
	double	real;
	double	imag;

	real = fabs(data->ship.real_part); 
	imag = fabs(data->ship.imag_part);
	data->ship.real_part = (real * real) - (imag * imag) + data->x_map;
	data->ship.imag_part = (2 * real * imag) + data->y_map;
}

void	ft_calc_ship(t_fractal *data, int x, int y)
{
	int			i;
	double		z;

	data->ship.real_part = 0.00;
	data->ship.imag_part = 0.00;
	i = 0;
	while (i <= data->max_iter)
	{
		ship_equation(data);
		z = calc_z_magnitude_ship(data);
		if (z >= 4)
		{
			color_pixel_xy(data, x, y, ft_progresive_color_ship(i, data->max_iter));
			break;
		}
		color_pixel_xy(data, x, y, 0x00330011); 
		i++;
	}
}
