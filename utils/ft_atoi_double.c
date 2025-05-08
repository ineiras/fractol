#include "fractol.h"
// Hay que incluirla en mi Libft.
double	ft_atoi_double(const char *nptr)
{
	t_atoi	num;

	num.sign = 1;
	num.decimal = 0.1;
	num.result = 0.00;
	while ((*nptr == ' ') || ((*nptr >= '\t') && (*nptr <= '\r')))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			num.sign = -num.sign;
		nptr++;
	}
	while ((*nptr >= '0') && (*nptr <= '9'))
	{
		num.result = num.result * 10 + (*nptr - '0');
		nptr++;
	}
	if (*nptr == '.')
	{
		nptr++;
		while (*nptr >= '0' && *nptr <= '9')
		{
			num.result = num.result + (*nptr - '0') * num.decimal;
			num.decimal = num.decimal * 0.1;
			nptr++;
		}
	}
	return (num.result * num.sign);
}
