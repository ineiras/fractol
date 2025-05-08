/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:48:49 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/29 13:08:47 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_hex_size(unsigned long long n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 16;
		size++;
	}
	return (size);
}

static void	ft_put_pointer(unsigned long long addres)
{
	char	*hex_dict;

	hex_dict = "0123456789abcdef";
	if (addres >= 16)
		ft_put_pointer(addres / 16);
	ft_putchar_fd(hex_dict[addres % 16], 1);
}

int	ft_print_ptr(void *addres, int counter)
{
	if (addres == NULL)
	{
		ft_putstr_fd("(nil)", 1);
		return (counter + 5);
	}
	ft_putstr_fd("0x", 1);
	ft_put_pointer((unsigned long long) addres);
	return (ft_hex_size((unsigned long long) addres) + counter + 2);
}
