/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 11:39:31 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/18 16:07:41 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*s1;
	const unsigned char	*s2;

	s1 = dest;
	s2 = src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char c[] = "Charmander tipo fuego.";
	char l[50];

	printf("Antes de la funcion:\n%s, %p\n", c, &c);

	ft_memcpy(l, c, 7);
	printf("Despues de la funcion:\n%s, %p", l, &l);
	return (0);
}
*/
