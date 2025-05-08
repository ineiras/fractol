#include "fractol.h"

// Determina el color del píxel en funcion de la iteraciones dando un valor base (satruración) diferente a cada color RGB.
int	ft_progresive_color(int iteration, int max_iter)
{
	int	r;
	int	g;
	int	b;

	r = ((iteration * 255) / max_iter);
	g = ((iteration * 180) / max_iter);
	b = ((iteration * 100) / max_iter);	
	return ((r << 16) | (g << 8) | b);
}

int	ft_progresive_color_julia(int iteration, int max_iter)
{
	int	r;
	int	g;
	int	b;

	r = ((iteration * 100) / max_iter);
	g = ((iteration * 180) / max_iter);
	b = ((iteration * 255) / max_iter);	
	return ((r << 16) | (g << 8) | b);
}

int	ft_progresive_color_ship(int iteration, int max_iter)
{
	int	r;
	int	g;
	int	b;

	r = ((iteration * 255) / max_iter);
	g = ((iteration * 50) / max_iter);
	b = ((iteration * 20) / max_iter);	
	return ((r << 16) | (g << 8) | b);
}
