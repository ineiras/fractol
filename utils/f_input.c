#include "fractol.h"

static void	input_instructions(void)
{
	ft_printf("Incorrect input.\nUse: ./fractol <fractal>.\nAvailable <fractal>: 'Julia', 'Mandelbrot', 'Ship'\n");
	ft_printf("For <fractal> 'Julia' you must specify Z's first iteration as parameters: <a> <bi>.\n");
	ft_printf("Julia usage example: ./fractol 'Julia' '-0.79' '0.15'\n");
}

void	input_checker(int argc, char **argv)
{
	if (argc != 2 && argc != 4)
	{
		input_instructions();
		exit (1);
	}
	if ((argc == 2 && (ft_strncmp(argv[1], "Mandelbrot", 11) != 0)) && (argc == 2 && (ft_strncmp(argv[1], "Ship", 5) != 0)))
	{
		input_instructions();
		exit (1);
	}
	if (argc == 4 && (ft_strncmp(argv[1], "Julia", 6) != 0))
	{
		input_instructions();
		exit (1);
	}
}
