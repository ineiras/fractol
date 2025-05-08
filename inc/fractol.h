#include "mlx.h"
#include "libft/libft.h"
#include <stdlib.h>
#include <stdio.h> // printf
#include <stdbool.h> // true & false
#include <math.h> // sqrt, absolute, isinf()...

// Macros Ancho x Alto:
# define WIDTH  800
# define HEIGHT 800

// Macro Max Iteraciones:
# define MAX_ITER 30

// Julia Struct:
typedef struct julia_struct
{
	double	c_real_part;
	double	c_imag_part;
	double	z_real_part;
	double	z_imag_part;
} t_julia;

// Mandel Struct:
typedef struct mandel_struct
{
	double	real_part;
	double	imag_part;
} t_mbrot;

// Burning Ship Struct:
typedef struct ship_struct
{
	double	real_part;
	double	imag_part;
} t_ship;


// Fractal Struture
typedef struct fract_list 
{
	void	*innit;
	void	*window;
	void	*img;
	char	*addr;
	char	*fractal;
	int		win_width;
	int		win_height;
	int		bpp;
	int		line_length;
	int		endian;
	int		max_iter;
	double	x_max;
	double	x_min;
	double	y_max;
	double	y_min;
	double	x_map;
	double	y_map;
	double	offset; //
	double	real; //
	double	imag; //
	t_mbrot	mandel;
	t_julia	julia;
	t_ship	ship;
} t_fractal;



// Atoi Structure (solo sirve para ahorrar lineas):
typedef struct atoi_double
{
	int		sign;
	double	result;
	double	decimal;
} t_atoi;


/*
(Deprecated) Complex Number Structure 'Z' Value (Mandelbrot):
typedef struct complex_num
{
	double	real;
	double	imag;
} t_complex;
*/

// Innitialize Data Structure:
void	innit_struct(t_fractal *data, int argc, char **argv);
void	innit_more_struct(t_fractal *data, int argc, char **argv);

// Common Fractal Main Functions:
void    fractal_creation(t_fractal *data);
void	fractal_maker(t_fractal *data);
void	color_pixel_xy(t_fractal *data, int x, int y, int color);
void	map_pixel_to_complex(t_fractal *data, int x, int y);

// Mandelbrot Fractal;
void	ft_calc_mandelbrot(t_fractal *data, int x, int y);
void	mandelbrot_equation(t_fractal *data);
double	calc_z_magnitude(t_fractal *data);

// Julia Fractal:
void	ft_calc_julia(t_fractal *data, int x, int y);
void	julia_equation(t_fractal *data);
double	calc_z_magnitude_julia(t_fractal *data);

// Burnship Fractal:
void	ft_calc_ship(t_fractal *data, int x, int y);
void	ship_equation(t_fractal *data);
double	calc_z_magnitude_ship(t_fractal *data);

// Events Functions:
void	events_listening(t_fractal *data);
int		ft_keyboard_events(int keycode, t_fractal *data);
int		ft_mouse_events(int button_pressed, int x, int y, t_fractal *data);
void	scroll_to_center(int button_pressed, t_fractal *data);
void	scroll_to_pixel(int button_pressed, int x, int y, t_fractal *data);
void	ft_zoom(t_fractal *data, double x_center, double y_center, double zoom_factor);
void	ft_move(int keycode, t_fractal *data);
int		ft_escape_close(int keycode, t_fractal *data);
int		ft_window_close(t_fractal *data);

// Color Functions:
int		ft_progresive_color(int iteration, int max_iter); // Used for Mandelbrot;
int		ft_progresive_color_julia(int iteration, int max_iter); // Used for Julia;
int		ft_progresive_color_ship(int iteration, int max_iter); // Used for Burned Ship;

// Util Functions:
void	input_checker(int argc, char **argv);
void	free_struct(t_fractal *data, bool exit_pressed);
double	ft_atoi_double(const char *nptr);
