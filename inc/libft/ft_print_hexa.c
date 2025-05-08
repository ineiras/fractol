/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:27:18 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/29 13:21:17 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

static char	*ft_swap(char *ptr)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	temp;

	if (ptr == NULL)
		return (NULL);
	j = 0;
	i = ft_strlen(ptr) - 1;
	while (j < i)
	{
		temp = ptr[j];
		ptr[j] = ptr[i];
		ptr[i] = temp;
		i--;
		j++;
	}
	return (ptr);
}

static unsigned int	ft_size(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n >= 16)
	{
		n = n / 16;
		i++;
	}
	return (i + 1);
}

static char	*ft_converter_caps(unsigned int num, char *ptr)
{
	unsigned int	temp;
	unsigned int	i;

	i = 0;
	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;
		ptr[i++] = temp;
		num = num / 16;
	}
	ptr[i] = '\0';
	return (ptr);
}

static char	*ft_converter_min(unsigned int num, char *ptr)
{
	unsigned int	temp;
	unsigned int	i;

	i = 0;
	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 87;
		ptr[i++] = temp;
		num = num / 16;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	ft_print_hexa(unsigned int num, int counter, char letter)
{
	char	*ptr;

	if (num == 0)
	{
		ft_putstr_fd("0", 1);
		return (counter + 1);
	}
	ptr = malloc((ft_size(num) + 1) * sizeof(char));
	if (ptr == NULL)
		return (counter);
	if (letter == 'X')
		ptr = ft_converter_caps(num, ptr);
	else
		ptr = ft_converter_min(num, ptr);
	ft_swap(ptr);
	ft_putstr_fd(ptr, 1);
	counter += ft_strlen(ptr);
	free(ptr);
	return (counter);
}
