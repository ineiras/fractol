/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:25:46 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/21 13:33:31 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_print_string(const char *str, int count)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (count + 6);
	}
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], 1);
		count++;
		i++;
	}
	return (count);
}
