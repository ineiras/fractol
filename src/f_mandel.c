#include "fractol.h"

// Calculamos la magnitud de Z que es lo que compararemos con 2. 
// Aunque realmente estamos comparando el cuadrado de la magnitud con 4 para mejorar el rendimiento del programa (mismo resultado que calculando la raiz).
double	calc_z_magnitude(t_fractal *data)
{
	double	z_mag;
	double 	z_mag_r;
	double	z_mag_i;

	z_mag_r = data->mandel.real_part; 
	z_mag_i = data->mandel.imag_part;
	z_mag = (z_mag_r * z_mag_r) + (z_mag_i * z_mag_i); // Si aplicasemos sqrt() obtendriamos la magnitud
	return (z_mag);
}

// Para calcular Z^2 se debe hacer (a^2 - b^2) + 2ab. 
// Donde (a^2 - b^2) es la parte real y (2ab) la parte imaginaria.i
// El resultado de la equcion son las dos partes con sus partes C respectivas sumadas. Es decir, Zn.
void	mandelbrot_equation(t_fractal *data)
{
	double	real;
	double	imag;

	real = data->mandel.real_part;
	imag = data->mandel.imag_part;
	data->mandel.real_part = (real * real) - (imag * imag) + data->x_map; // (a^2 - b^2) + la parte real de C (x_map);
	data->mandel.imag_part = (2 * real * imag) + data->y_map; // 2ab + la parte imaginaria de C (y_map);
}

// Aplica la funcion de mandelbrot a cada uno de los píxeles mapeados.
void	ft_calc_mandelbrot(t_fractal *data, int x, int y)
{
	int			i;
	double		z;

	data->mandel.real_part = 0.00;
	data->mandel.imag_part = 0.00;
	i = 0;
	while (i <= data->max_iter)
	{
		mandelbrot_equation(data);
		z = calc_z_magnitude(data);
		if (z >= 4)
		{
			color_pixel_xy(data, x, y, ft_progresive_color(i, data->max_iter));
			break;
		}
		color_pixel_xy(data, x, y, 0x00EEEEEE);
		i++;
	}
}
