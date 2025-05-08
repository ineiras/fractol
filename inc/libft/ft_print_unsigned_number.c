/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_number.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:36:32 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/29 11:57:49 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

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

static char	*ft_conversion(char *ptr, int ptr_size, unsigned int nb)
{
	unsigned int	c;

	c = nb;
	ptr[ptr_size] = '\0';
	ptr_size--;
	while (ptr_size != -1)
	{
		ptr[ptr_size] = (c % 10) + '0';
		ptr_size--;
		c = c / 10;
	}
	return (ptr);
}

static char	*ft_utoa(unsigned int nb)
{
	char			*ptr;

	ptr = (char *)malloc(ft_size(nb) + 1);
	if (ptr == NULL)
		return (NULL);
	ptr = ft_conversion(ptr, ft_size(nb), nb);
	return (ptr);
}

int	ft_print_unumber(unsigned int n, int counter)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = ft_utoa(n);
	if (ptr == NULL)
		return (0);
	while (ptr[i] != '\0')
	{
		ft_putchar_fd(ptr[i], 1);
		i++;
	}
	counter += i;
	free(ptr);
	return (counter);
}
