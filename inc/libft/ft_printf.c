/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:05:36 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/29 13:41:53 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_format(va_list args, char *str, int count)
{
	if (*str == 'c')
		count = ft_printchar((char)va_arg(args, int), count);
	else if (*str == 's')
		count = ft_print_string(va_arg(args, char *), count);
	else if (*str == 'p')
		count = ft_print_ptr(va_arg(args, void *), count);
	else if (*str == 'd' || *str == 'i')
		count = ft_print_number(va_arg(args, int), count);
	else if (*str == 'u')
		count = ft_print_unumber((unsigned int)va_arg(args, int), count);
	else if (*str == 'x' || *str == 'X')
		count = ft_print_hexa(va_arg(args, int), count, *str);
	else if (*str == '%')
		count = ft_printchar(*str, count);
	return (count);
}

int	ft_printf(char const *str, ...)
{
	int		count;
	va_list	args;

	if (!str)
		return (0);
	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (ft_strchr("cspdiuxX%", *str))
			{
				count = ft_format(args, (char *)str, count);
				str++;
			}
		}
		else
			count = ft_printchar(*str++, count);
	}
	va_end(args);
	return (count);
}
/*
int	main(void)
{
	char ptr[] = "Papi";
	char ptr2[] = "Mami";
	printf("\nMi resultado\n");
	ft_printf("Hola %s, se que hoy has cumplido %d años.","Sergio", 24);
	// Por alguna razón la Ñ y la ñ me cuentan como dos carácteres diferentes.
	printf("\nResultdo de Printf(original\n");
	printf("Primer test: %p, Segundo test: %p es un 100%%l", &ptr, &ptr2);
	
	return (0);
}*/
