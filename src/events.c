#include "fractol.h"

int	ft_window_close(t_fractal *data)
{
	free_struct(data, true);
	exit (0);
}

int	ft_escape_close(int keycode, t_fractal *data)
{
	if (keycode == 53)
	{
		free_struct(data, true); 
		exit (0);
	}
	return (0);	
}

void	ft_move(int keycode, t_fractal *data)
{
	double	x_move;
	double	y_move;

	x_move = (data->x_max - data->x_min ) * 0.05; // Calculamos cuanto nos movemos; (5%)
	y_move = (data->x_max - data->x_min ) * 0.05;
	if (keycode == 123)
	{
		data->x_min = data->x_min - x_move; // Si es hacia la izquierda  o abajo restamos;
		data->x_max = data->x_max - x_move; 
	}
	else if (keycode == 124)
	{
		data->x_min = data->x_min + x_move; // Si es hacia arriba sumamos;
		data->x_max = data->x_max + x_move;
	}
	else if (keycode == 126)
	{
		data->y_min = data->y_min - y_move;
		data->y_max = data->y_max - y_move;
	}
	else if (keycode == 125)
	{
		data->y_min = data->y_min + y_move;
		data->y_max = data->y_max + y_move;
	}
	fractal_creation(data); // Graficamos los nuevos intervalos;
}

int	ft_keyboard_events(int keycode, t_fractal *data)
{
	if (keycode == 53)
		ft_escape_close(keycode, data);
	if (keycode == 126 || keycode == 125 || keycode == 124 || keycode == 123)
		ft_move(keycode, data);
	return (0);
}

void	events_listening(t_fractal *data)
{
	mlx_key_hook(data->window, ft_keyboard_events, data); // Eventos teclado;
	mlx_mouse_hook(data->window, ft_mouse_events, data); // Eventos Ratón;
	mlx_hook(data->window, 17, (1L<<5), ft_window_close, data); // Otros eventos;
}
