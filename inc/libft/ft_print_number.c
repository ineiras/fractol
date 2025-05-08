/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:43:50 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/29 11:58:54 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

int	ft_print_number(int n, int counter)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = ft_itoa(n);
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
