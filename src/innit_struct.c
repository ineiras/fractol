#include <fractol.h>

void	innit_more_struct(t_fractal *data, int argc, char **argv)
{
	data->fractal = argv[1];
	data->win_width = WIDTH;
	data->win_height = HEIGHT;
	data->max_iter = MAX_ITER;
	data->x_min = -2.00;
	data->x_max = 2.00;
	data->y_min = -2.00;
	data->y_max = 2.00;	
	if (argc == 4)
	{
		data->julia.c_real_part = ft_atoi_double(argv[2]);
		data->julia.c_imag_part = ft_atoi_double(argv[3]);	
	}
}

void	innit_struct(t_fractal *data, int argc, char **argv)
{
	data->innit = mlx_init();
	if (!data->innit)
		free_struct(data, false);
	innit_more_struct(data, argc, argv);
	data->window = mlx_new_window(data->innit, WIDTH, HEIGHT, data->fractal);
	if (!data->window)
		free_struct(data, false);
	}
