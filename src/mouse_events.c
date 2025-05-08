#include "fractol.h"

void	ft_zoom(t_fractal *data, double x_center, double y_center, double zoom_factor)
{
	double	x_interval_len;
	double	y_interval_len;

	x_interval_len = (data->x_max - data->x_min ) * zoom_factor; // Calculamos la longitud total del nuevo intervalo y 
	y_interval_len = (data->y_max - data->y_min ) * zoom_factor; // lo hacemos mas pequeño o grande en funcion del zoom.
	data->x_min = x_center - (x_interval_len / 2); // Nuestros nuevos intervalos serán la longitud total del intervalo entre 2.
	data->x_max = x_center + (x_interval_len / 2); // Como debe estar centrado en el punto (x,y), los itervalos minimos seán desde el centro
	data->y_min = y_center - (y_interval_len / 2); // hasta el - (intervalo / 2) y los maximos desde el centro hasta el + (intervalo /2);
	data->y_max = y_center + (y_interval_len / 2);
	fractal_creation(data);
}

void	scroll_to_pixel(int button_pressed, int x, int y, t_fractal *data)
{
	double	zoom_factor;
	double	x_center;
	double	y_center;
	
	map_pixel_to_complex(data, x, y); // Nuestro nuevo centro será el pixel (x,y).
	x_center = data->x_map;
	y_center = data->y_map;
	if (button_pressed == 6)
	{
		zoom_factor = 0.8;
		data->max_iter += 10;
		ft_zoom(data, x_center, y_center, zoom_factor);
	}
	else if (button_pressed == 7)
	{		
		zoom_factor = 1.2;
		if (data->max_iter > 30)
			data->max_iter -= 10;
		ft_zoom(data, x_center, y_center, zoom_factor);
	}
}


void	scroll_to_center(int button_pressed, t_fractal *data)
{
	double	zoom_factor;
	double	x_center;
	double	y_center;
	
	map_pixel_to_complex(data, data->win_width/2, data->win_height/2); // Cordenadas del pixel en el centro.
	x_center = data->x_map;
	y_center = data->y_map;
	if (button_pressed == 4)
	{
		zoom_factor = 0.8;
		data->max_iter += 10;
		ft_zoom(data, x_center, y_center, zoom_factor);
	}
	else if (button_pressed == 5)
	{		
		zoom_factor = 1.2;
		if (data->max_iter > 30)
			data->max_iter -= 10;
		ft_zoom(data, x_center, y_center, zoom_factor);
	}
}


int	ft_mouse_events(int button_pressed, int x, int y, t_fractal *data)
{
	if (button_pressed == 4 || button_pressed == 5)
		scroll_to_center(button_pressed, data);
	if (button_pressed == 6 || button_pressed == 7)
		scroll_to_pixel(button_pressed, x, y, data);	
	return (0);
}
