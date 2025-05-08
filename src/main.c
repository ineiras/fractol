#include "fractol.h"

int	main(int argc, char **argv)
{
	t_fractal	*data;
	
	input_checker(argc, argv); 
	data = malloc(sizeof(t_fractal));
	if (!data)
		return (0);
	innit_struct(data, argc, argv);
	fractal_creation(data); // Creacion del fractal base;
	events_listening(data); // Escuchamos los eventos de raton y teclado;
	mlx_loop(data->innit);	
	return (0);
}
