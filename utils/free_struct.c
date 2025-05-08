#include "fractol.h"

void	free_struct(t_fractal *data, bool exit_pressed)
{
	if (!data->innit)
	{
		free(data);
		exit (1);
	}
	if (!data->window)
	{
		free(data);
		exit (1);
	}
	if (!data->img)
	{
		mlx_destroy_window(data->innit, data->window);
		free(data);
		exit(1) ;
	}
	if (exit_pressed == true || !data->addr)
	{
		printf("Freeing & leaving program\n");
		mlx_destroy_window(data->innit, data->window);
		mlx_destroy_image(data->innit, data->img);
		free(data);
		exit (1);
	}
}
