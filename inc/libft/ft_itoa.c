/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:34:46 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/18 16:03:44 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_size(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

static char	*ft_malloc(int size, int sign)
{
	char	*ptr;

	if (sign == 0)
	{
		ptr = (char *)malloc((size + 1) * sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}
	}
	if (sign == 1)
	{
		ptr = (char *)malloc((size + 2) * sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}
	}
	return (ptr);
}

static char	*ft_conversion(char *ptr, int ptr_size, unsigned int nb, int sign)
{
	unsigned int	c;

	c = nb;
	ptr_size += sign;
	ptr[ptr_size] = '\0';
	ptr_size--;
	while (ptr_size - sign != -1)
	{
		ptr[ptr_size] = (c % 10) + '0';
		ptr_size--;
		c = c / 10;
	}
	if (sign == 1)
	{
		ptr[ptr_size] = '-';
		ptr_size--;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	char			*ptr;
	unsigned int	nb;
	int				sign;

	sign = 0;
	if (n < 0)
	{
		nb = -n;
		sign = 1;
	}
	else
		nb = (unsigned int) n;
	ptr = ft_malloc(ft_size(nb), sign);
	if (ptr == NULL)
		return (NULL);
	ptr = ft_conversion(ptr, ft_size(nb), nb, sign);
	return (ptr);
}
/*
int	main(void)
{
	int	c = 2001;

	printf("%s\n", ft_itoa(c));
	return (0);
}*/
