/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 14:24:38 by ineiras-          #+#    #+#             */
/*   Updated: 2024/12/26 14:34:28 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	a[] = "Charmander";
	char	b[] = "Piplup";
	char	c[] = "Pikachu";

	printf("%zu\n",ft_strlen(a));
	printf("%zu\n",ft_strlen(b));
	printf("%zu\n",ft_strlen(c));
	return (0);
}
*/
