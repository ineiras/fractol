#include "fractol.h"

/* How it Works?
En Julia el valor de C, en vez de ser las cordenadas del píxel (x_map, y_map) como en Mandelbrot, serán los valores
que pasa el usuario como argumentos, los cuales no variarán nunca independientemente del píxel.
En Julia, lo que variará en cada uno de los pixéles, será la parte real e imag de Z en Z0, la cual estará formada
por las coordenadas del píxel (x_map, y_map) en vez de ser (0.00, 0.00) como en Mandelbrot.
*/

double	calc_z_magnitude_julia(t_fractal *data)
{
	double	z_mag;
	double 	z_mag_r;
	double	z_mag_i;

	z_mag_r = data->julia.z_real_part; 
	z_mag_i = data->julia.z_imag_part;
	z_mag = (z_mag_r * z_mag_r) + (z_mag_i * z_mag_i);
	return (z_mag);
}

void	julia_equation(t_fractal *data)
{
	double	real;
	double	imag;

	real = data->julia.z_real_part;
	imag = data->julia.z_imag_part;
	data->julia.z_real_part = (real * real) - (imag * imag) + data->julia.c_real_part; 
	data->julia.z_imag_part = (2 * real * imag) + data->julia.c_imag_part;
}

void	ft_calc_julia(t_fractal *data, int x, int y)
{
	int			i;	
	double		z_n;

	data->julia.z_real_part = data->x_map;
	data->julia.z_imag_part = data->y_map;
	i = 0;
	while (i <= data->max_iter)
	{
		julia_equation(data);
		z_n = calc_z_magnitude_julia(data);
		if (z_n >= 4)
		{
			color_pixel_xy(data, x, y, ft_progresive_color_julia(i, data->max_iter));
			break;
		}
		color_pixel_xy(data, x, y, 0x007722FF); 
		i++;
	}
}
